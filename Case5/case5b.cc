/*program to explain the order of the constructor and destructor
filename:case5b.cc
Date:11/04/2020
*/

#include<iostream> 
using namespace std; 
//creating a Base class  
class Base 
{ 
public: 
    Base()  //Base class constructor
    { 
        cout<< "Constructor called" <<endl; 
	cout<<"-----------------"<<endl;
    	fun() ; 
    } 
  
    ~Base()  //base class destructor 
    {  
    	cout<< "Base class destructor" <<endl;
	cout<<"--------------"<<endl;
    } 
  
    virtual void fun() //virtual fucntion 
    {  
        cout<< "Virtual function" <<endl;
	cout<<"----------"<<endl;  
    } 
  
    void fun1()  
    {  
        fun();  
    } 
}; 
  
//derived class inherting the base class fucntionalities
class Derived : public Base 
{ 
public: 
        Derived()  //derived class constructor
        { 
            cout<< "Derived class Constructor" <<endl;  
		cout<<"-------------"<<endl;
        } 
        void fun()  //derived class fucntion
        { 
            cout<< "Derived class Virtual function" <<endl;
		cout<<"----------"<<endl;  
        }

 	//derived class destructor
		virtual	~Derived() 
    	{  
        	cout<< "Derived class destructor" << endl ;
		cout<<"---------"<<endl;
    	}
}; 
  
int main(int argc,char* argv[]) 
{ 
	if(argc==2)
	{
		cout<<"Usage:: ./a.out"<<endl;
		cout<<"display the order of the constructor and destructor"<<endl;
	}
else
{
//derived class object
    Derived d; 
//invoking the derived class function
    d.fun(); 
}
} 


