#include <iostream>
#include <string>
#define SIZE 10
using namespace std;

class Client
{
  private:
    int CID;
    string name;
    string NIC;
    string email;
    string address;
    Payment *payment[SIZE];
    int noOfPayments;
  public:
    Client();
    Client(int cCID,string cname,string cNIC,string cEmail, string caddress){
      CID = cCID;
      name = cname;
      NIC = cNIC;
      email = cEmail;
      address = caddress;
      noOfPayments = 0;
    }
    void addPayment(Payment *P){
      if(noOfPayments < SIZE)
        order[noOfPayments] = 0;
      noOfOrders++;
    }
    void displayClient(){
      cout << "Customer CID =" << CID << endl;
      cout << "Customer name =" << name << endl;
      cout << "Customer NIC =" << NIC << endl;
      cout << "Customer Email =" << email << endl;
      cout << "Customer Address = " << address << endl;
      
      for(int i = 0; i < noOfPayments; i++)
        Payment[i] -> displayPayments();
    }
  
};