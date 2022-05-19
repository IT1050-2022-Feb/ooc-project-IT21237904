#include <iostream>
#define SIZE 10
using namespace std;

class Policy {      
	protected : 
	  char PID[10];
	  char pname[20];
//assosiation with payment
    payment *payment[SIZE];
		int noOfPayments;
	  
	public:
	   void DeletePolicy(); 
	   void UpdatePolicy();
	   void	DisplayPolicy();
 	   void	SearchPolicy();

//assosiation with payment
		void addPayment(Payment *O);
		void displayPolicy();
};
