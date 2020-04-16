/*program to explain the operator overloading
filename:case6a.cc
*/

#include<iostream>
#include<string.h>
using namespace std;
class players
{
	char name[20];
	public:
	players() //constructor
	{
		cout<<"constructor is called::"<<endl;
	}
	//fucntion to read the names	
	void readname()
	{
		cout<<"Enter the name:"<<endl;
		cin>>name;
	}
//function to display the names
	void displayname()
	{
		cout<<"Player Fullname::"<<name<<endl;
	}
//function to cancatenation of two string using operator overloading
	players operator+(players x)
	{
		players p;
		strcpy(p.name,name);
		strcat(p.name,x.name);
		return p;
	}

};
	
int main(int argc,char* argv[])
{
	if(argc==2)
	{
		cout<<"Usage :: ./a.out"<<endl;
		cout<<"Explains the operator overloading"<<endl;
	}
	else
	{
	players obj1,obj2,obj3;
	obj1.readname();
	obj2.readname();
	obj3=obj1+obj2;

	obj3.displayname();
	}
return 0;
}
