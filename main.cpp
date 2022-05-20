#include <iostream>
#include <cstring>
#include "policy.h"
#include "individual.h"
#include "group.h"
#include "family.h"
#include "seniorCitizen.h"
#include "payment.h"
#include "client.h"
using namespace std;

//main method
int main() {



//creating client objects
	Client *C1 = new Client("John", "Malabe");
  Client *C2 = new Client("Vito" , "Malabe");
	
//creating payment objects  
  Payment *P1 = new Payment("001", C1);
  Payment *P2 = new Payment("002",  C2);
    
//creating derived policy objects
  
    Individual i1("p001","goldIndividual","best plan for individual",35000);   
    Group g1("p002","goldGroup","best plan for individual",500000); 
    Family f1("p003","goldFamily","best plan for individual",100000);  
    SeniorCitizen s1("p004","goldSeniorCitizen","best plan for individual",25000);  






//call functions------------------------------------------------ 
    i1.	displayDetails();  
    g1.	displayDetails(); 
    f1.	displayDetails(); 
    s1.	displayDetails(); 


  



  
    return 0;
}