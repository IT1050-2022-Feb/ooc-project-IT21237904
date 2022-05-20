//bi directional assosiation with client
#include <iostream> 
#include <string>
using namespace std;

class Payment
{
   private:
   	string paymentID;
   	Client *cli;
   
   public:  
   	Payment(string	payID,  Client *pcli){  
       paymentID = payID;
       cli = pcli;
       cli->addPayment(this);
    }
  
   	void displayPayments(){
      cout << " Payment ID " <<paymentID << endl;
    }
};









