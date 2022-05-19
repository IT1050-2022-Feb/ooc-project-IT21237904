#include <iostream> 
#include <string>
using namespace std;
class Payment
{
   private:
   	string paymentID;
   	Policy *Polic;
   
   public:  
   	Payment (string	payID,  Policy *pPolic);
   	void displayPayments();
};

Payment::Payment (string payID,  Policy *pPolic) 
{  
     paymentID = payID;
     Polic = pPolic;
     Polic->addPayment(this);
}

void Payment::displayPayments()
{
 cout << " Payment ID " <<paymentID << endl;
 
}

Policy::Policy( string pname, string pid)
{
    name = pname;
    id = pid;
    noOfPayments = 0;
}
void Policy::addPayment(Payment *O)
{
        if (noOfPayments < SIZE)
           payment[noOfPayments] = O;
        noOfPayments++;
}

void Policy::displayPolicy()
{
    cout << "Policy Name  = " << name << endl;
    cout << " Policy ID  = " << id << endl;
    for( int i = 0; i < noOfPayments; i++)
        payment[i]-> displayPayments();
}

