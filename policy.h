//uni directional assosiation with client
#include <iostream>
#include <string>
using namespace std;

class Policy {      
	protected : 
	  char PID[10];
	  char pname[20];

	  
	public:
	   void DeletePolicy(); 
	   void UpdatePolicy();
	   void	DisplayPolicy();
 	   void	SearchPolicy();
};







