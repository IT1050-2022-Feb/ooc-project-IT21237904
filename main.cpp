#include <iostream>
#include <cstring>
#include "policy.h"
#include "individual.h"
#include "group.h"
#include "family.h"
#include "seniorCitizen.h"

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
    
    return 0;
}