//Program using the private members of int* and char[] 
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Players
{
//declaration of variables in private
	char name[20];
	int *iage;
public:
//default constructor
	Players()
	{
		cout<<"Default constructor"<<endl;
	}
//parametrised constructor
	Players(char *playername)
	{
		cout<<"Parametrised constructor"<<endl;
		strcpy(name,playername);//coping string
	}
//Show function
// Return type:void
	void Show()
	{
		cout<<"Player's Age is"<<*iage<<endl;
	}
//Display function
//Return type:void
	void Display()
	{
		cout<<"Player's Full Name is ::"<<name<<endl;
	}
//overloadding oprator'+'
	Players operator+(Players s)
	{
		Players temp=name;
		strcat(temp.name,s.name);	//Concatenation of  two strings
		return temp;
	}

//putvalue function
//return type void
	void putvalue(int *ivalue)
	{
	iage=ivalue;
	}

	~Players()
	{
	cout<<"Destructor"<<endl;
	}
};
int main(int argc,char* argv[])
{
	if(argc==2)
	{
	cout<<"Usage: ./a.out"<<endl;
	cout<<"Member function and operator overloading"<<endl;
	}
	else
	{
	int iAg;
	cout<<"Enter Age:"<<endl;
	cin>>iAg;
	//creating objects for the class
	Players str1("Sachin");
	Players str2=("Tendulkar");
	Players str3;
	Players s;
	str3=str1+str2; //adding of two strings
	s.putvalue(&iAg);
	s.Show();
	str3.Display();
	}
}

