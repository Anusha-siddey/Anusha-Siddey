/*program that explains the storage classes
filename:case3b.cc
Date:10/04/2020
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
extern int g;     //storage class extern variable declaration

/*
function name:storageauto
return type:int
parameters:int n1,int n2
*/
int storageauto(int n1,int n2)
{
	auto int s;
	s=n1+n2;
	return s;
}
/*
function name: storagestatic
return type:void
function that describes the static storage class
*/

static int f=5;   //static variable declaration
void storagestatic()
{
	static int i=0;
	cout<<"static storage::f=\t"<<f--<<endl;
	cout<<"static storage::i=\t"<<i++<<endl;
}

/* 
function name: storageregister
return type:void
function that describes the register storage class
*/
void storageregister()
{
	register int roll=35;
	cout<<"Register Variable roll:"<<roll<<endl;
}
/*function name:storageextern
return type:void
function that describe the extern storage classes
*/
void storageextern()
{
	int g=10;
cout<<"Extern Storage ::g is"<<g<<endl; //display the extern variable
}

int main(int argc,char* argv[])
{
	int i=2,j=3,k,g=7;
	if(argc==2)
	{
	cout<<"useage:: ./a.out"<<endl;
	cout<<"describe the storage classes"<<endl;
	}
else
{
//auto storage fucntion calling
k=storageauto(i,j);  
cout<<"Auto storage :: Sum="<<k<<endl; 
//calling all storage classes functions    
storageextern();
storageregister();
storagestatic();
cout<<"g is:"<<g<<endl;
return 0;
}
}
