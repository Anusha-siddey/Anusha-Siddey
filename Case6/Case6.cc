/*porgram using int* and char[20] that explains the overloading/constructor and destructor
filename:case6.cc
Date:11/04/2020
*/
#include<iostream>
using namespace std ;

class Sampletest
{
	// private members
	int iValue ;
	int *iPtr;
	char name[20] ;
	
		// public members
	public:
		// default constructor
		Sampletest()
		{			
			cout<<"Default constructor is called"<< endl ;
			
			cout<<"Enter the ivalue:"<<endl;
			cin>>iValue;
		}
		// destructor
		~Sampletest()
		{
			cout<<"Destructor called" << endl ;
		}

		//operator overloading
	void operator--(int)
	{
		iValue--;
	}
		//  function to read inputs
		int getinput()
		{
			iPtr= &iValue ;
			//cout<< "enter a integer value " << endl  ; 
			//cin >> iValue ;
			
			cout<<"enter a name"<< endl ;
			cin >> name ;
		}

		//  function to display outputs
		
		int display()
		{
			cout<<"------- Display------"<<endl;
			cout<< "character is :" << name <<endl ;
			cout<<"---------------"<<endl;
			cout<< "Adress of integer value iNum:"<< iPtr << endl ;
			cout<<"---------------"<<endl;
			cout<< "After decrement is:"<< iValue << endl ;
			cout<<"---------------"<<endl;
			cout<< "Value in pointer variable *iPtr is:"<< *iPtr << endl ;
		}
		
} ;

int main(int argc, char* argv[])
{
	// condition for arguments to dispaly usage of the file
    if (argc == 2)
    {
        cout << "usage of the program:  ./a.out " << endl ; 
		cout << "using int* , char[] as private member variables " << endl ;
		
    
    }
    
    else
    {
    // object creation	
	Sampletest obj ;	
	// object for opperator overloading
	obj-- ;
	//functions invoking
	obj.getinput() ;
	obj.display() ;
	}
}
