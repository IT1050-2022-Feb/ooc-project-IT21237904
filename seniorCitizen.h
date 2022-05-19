#include <iostream>
#include <cstring>
using namespace std;

class SeniorCitizen : public Policy {  //derived class from policy
	protected : 
	   char description[50];
	   int premium; 
	public:
	   SeniorCitizen(char pid[], char name[], char desc[], int prem) { //overloading constructor
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