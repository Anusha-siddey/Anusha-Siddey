/*Program that explain the variable scope 
filename:case3a.cc
*/

#include<iostream> 
using namespace std; 

// global variable 
int inum1 = 5; 

// variable accessed from 
void display() 
{ 
	cout<<inum1<<endl; 
} 

// main function 
int main(int argc,char* argv[])	
{
	if(argc==2)
	{
		cout<<"Usage: ./a.out"<<endl;
		cout<<"Explains the variable scope"<<endl;
	}
	else
	{
        
	//displaying the global variable
	display();
	// changing value of inum1  by assigning value locally
	// conflict between local and global variable with same name then the local variable comes first
	inum1 = 10; 
	display(); 
	}
} 

