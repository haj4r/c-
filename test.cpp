#include <iostream>
using namespace std;
int main()
{
	//string also can be used
	//string location;
  char location[45];
	
  cout<< "Welcome to Boutique" << endl;//print welcome to Boutique
  cin>> location;//input value
	  if(location == "Scarfs")//condition
	  { 
	  	cout<< "aisle 1-12" << endl;
	  } 
	  else if (location != "Scarfs") {
	  	cout << "Error" << endl;
		}
  return 0 ;
}
