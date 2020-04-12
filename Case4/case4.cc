/*program explain the purpose and difference in public, private and protected access specifiers	
filename:case4.cc
Date:10/04/2020
*/
#include<iostream>

using namespace std;

class Base
{
private:
int num1;
public:
int num2;
protected:
int num3;
public:

void show()
{
num1=45;
num2=56;
num3=67;

//Every members can be accessed in same class
cout<<"\nAccessing variable within the class"<<endl;

cout<<"Value of num1: "<<num1<<endl;
cout<<"Value of num2: "<<num2<<endl;
cout<<"Value of num3: "<<num3<<endl;
}
};

class Derived:public Base
{
public:
void display()
{
num2=98;
num3=43;
cout<<"\nAccessing variable in the Derived  class"<<endl;

// num1 is not accessible here because it is private
//num2 is public so it is accessible any where
cout<<"Value of num2: "<<num2<<endl;
//'c' is declared as protected, so it is accessible in sub class
cout<<"Value of num3: "<<num3<<endl;
}
};

int main()
{

Base baseobj; // create object
baseobj.show();

Derived dervobj; // create object
dervobj.display();    // Sub class show() function

cout<<"\nAccessing variable outside the class"<<endl;
//'num1' cannot be accessed as it is private

//'b' is public as can be accessed from any where
cout<<"value of num2: "<<baseobj.num2<<endl;

//'c' is protected and cannot be accesed here
}

