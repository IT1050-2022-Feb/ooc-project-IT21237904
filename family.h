#include <iostream>
#include <cstring>
using namespace std;

class Family : public Policy {  //this is a derived class which stores class specific information
	protected : 
	   char description[50];
	   int premium; 
	public:
	   Family(char pid[], char name[], char desc[], int prem) { //overloading constructor
	      strcpy(PID, pid);
	      strcpy(pname, name);
	      strcpy(description, desc);
	      premium = prem;
	   }
		void displayDetails() {  //method to display details
			cout << PID << endl;
			cout << pname << endl; 
			cout << description << endl; 
			cout << premium << endl;
		}
	};