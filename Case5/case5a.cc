#include<iostream>
using namespace std;
//sample class
class sample
{
	//private members
	private:
		int iA,iB,iC;
		
	//friend function declaration
	friend int add(sample);
	//public member fucntion 	
	public:
		int display()
		{
			iC=10;
			cout<<"Private variable with in the class function::"<<iC<<endl;
		}
};
//friend function to access the private member variables
int add(sample obj)
{
	cout<<"Enter the values::"<<endl;
	cin>>obj.iA>>obj.iB;
	cout<<"Addition::"<<obj.iA + obj.iB<<endl;
}
int main(int argc,char* argv[])

{
	
	//condition to check the command line argument and display the usage of the program
	if(argc==2)
	{
	cout<<"Usage of the program::"<<endl;
	cout<<"./a.out"<<endl;
	cout<<"Accessing the private variable by friend fucntion and with in the class function"<<endl;
	}
	else
	{
		sample obj;
		add(obj);
		obj.display();
	}
}
