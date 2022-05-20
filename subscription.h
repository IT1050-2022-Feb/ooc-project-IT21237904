//bi directional assosiation with client
#include <iostream> 
#include <string>
using namespace std;

class Subscription
{
   private:
   	string sID;
   	Client *cli;
   
   public:  
   	Subscription(string	subID,  Client *pcli){  
       sID = subID;
       cli = pcli;
    }
  
   	void displaySubscription();
    }
};
