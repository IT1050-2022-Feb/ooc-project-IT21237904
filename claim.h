#include <cstring>
#include <iostream>
using namespace std;

class claim{
  private:
    string claimID;
    float  amount;
    client * c2;
  


public :
  claim() //default constructor
  claim(string  cID,float amo){

    claimID=cID;
    amount = amo;

    
  }
  cliam :: void setClaimDetails()


      claimID=cID;
      amount = amo;
      
  
  }
  claim:: void displayclaim()
  {
    cout << "claim ID :"<<claimID<<endl <<cout<<"Amount :"    <<amount
  }