/*
program to explain the purpose and difference in access specifiers
Date:10/04/2020
filename: Case4b.cc
*/
#include <iostream>
using namespace std;

class Base
{
 	private:
        int x;

 	protected:
 	    int y;

 	public:
 	    int z;

 	Base() //constructor to initialize data members
 	{
 	   x = 1;
 	   y = 2;
 	   z = 3;
 	}
};

class derive: private Base
{
//y and z becomes private members of class derive and x remains private
 	public:
 	    void showdata()
 	    {
		cout<<"Data from the private access specification::"<<endl;
 	       cout << "x is not accessible" << endl;
               cout << "value of y is " << y << endl;
               cout << "value of z is " << z << endl;
 	    }
};
class derive1: protected Base
{
//y and z becomes protected members of class derive
        public:
            void show()
            {
		
		cout<<"Data from the protected access specification::"<<endl;
               cout << "x is not accessible" << endl;
               cout << "value of y is " << y << endl;
               cout << "value of z is " << z << endl;
            }
};
class derive2: public Base
{
//y becomes protected and z becomes public members of class derive
        public:
            void display()
            {
	
		cout<<"Data from the public access specification::"<<endl;
               cout << "x is not accessible" << endl;
               cout << "value of y is " << y << endl;
               cout << "value of z is " << z << endl;
            }
};

int main(int argc,char* argv[])
{
	if(argc==2)
	{
		cout<<"Usage: ./a.out"<<endl;
		cout<<"it explains how  the access specifiers wroks"<<endl;
	}
else
{
     derive a; //object of derived class
	derive1 b;
	derive2 c;
        a.showdata();
	b.show();
	c.display();
}	    
 return 0;

} 
