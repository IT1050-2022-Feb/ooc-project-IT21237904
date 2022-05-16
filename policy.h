#include <iostream>
using namespace std;

class Policy {      //this the base class policy which stores basic information of insurance policies
	protected : 
	  char PID[10];
	  char pname[20]; 
	  
	public:
	   void DeletePolicy(); //othermethods
	   void UpdatePolicy();
	   void	DisplayPolicy();
 	   void	SearchPolicy();
};