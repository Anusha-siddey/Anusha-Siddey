/*program for variable scope and modifier types
filename : case3a.cc
Date    :09/04/2020
*/
#include <iostream>
using namespace std;

//global variables declarations

short int num1;
long int num2;

int main(int argc,char* argvp[])
{
	if(argc==2)
	{
        cout<<"Short int :"<<num1<<endl;
		cout<<"usage :./a.out"<<endl;
		cout<<"Displays the variable scope and modifier types"<<endl;
	}
	else
	{

 	//local variables local variables declaration          
    short unsigned int num3;  
    long signed int num4;
    cout << "enter the short unsigned int::"  << endl;
    cin >> num3;
    cout<<"enter the long signed int::"<<endl;
    cin>>num4;
    num1 = num3;
    num2=num4;
 	
	cout<<"Short int :"<<num1<<endl;
	cout<<"Long  int :"<<num2<<endl;
	cout<<"Short Unsigned int:"<<num3<<endl;
	cout<<"long signed int :"<<num4<<endl;
}

return 0;
}
