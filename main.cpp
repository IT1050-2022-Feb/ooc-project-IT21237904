#include <iostream>
#include <cstring>
#include "policy.h"
#include "individual.h"
#include "group.h"
#include "family.h"
#include "seniorCitizen.h"
#include "payment.h"

using namespace std;

//main method
int main() {

//create objects here--------------------------------------------

    Individual i1("p001","goldIndividual","best plan for individual",35000);   
    Group g1("p002","goldGroup","best plan for individual",500000); 
    Family f1("p003","goldFamily","best plan for individual",100000);  
    SeniorCitizen s1("p004","goldSeniorCitizen","best plan for individual",25000);  






//call functions------------------------------------------------ 
    i1.	displayDetails();  
    g1.	displayDetails(); 
    f1.	displayDetails(); 
    s1.	displayDetails(); 


  
char ch;
	Policy *P1 = new Policy("Individual", "1423");
  Policy *P2 = new Policy("Group" , "2311");
	Payment *O1 = new Payment("001", P1);
  Payment *O2 = new Payment("002",  P1);
    cout << "Payments of-" << endl;
    P1->displayPolicy();
    cin >> ch;

  
    return 0;
}