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
    Individual i2("p002","silverIndividual","good plan for individual",25000);  
    Individual i3("p003","bronzeIndividual","basic plan for individual",15000);  
    
    Group g1("p004","goldGroup","best plan for individual",500000); 
    Family f1("p005","goldFamily","best plan for individual",100000);  
    SeniorCitizen s1("p006","goldSeniorCitizen","best plan for individual",25000);  






//call functions------------------------------------------------ 
    i1.	displayDetails(); 
    i2.	displayDetails(); 
    i3.	displayDetails(); 
    g1.	displayDetails(); 
    f1.	displayDetails(); 
    s1.	displayDetails(); 
    
    return 0;
}