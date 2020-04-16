/*program that explain the int* char[] as private members
filename:case6b.cc
*/
#include<iostream>
#include<string.h>
using namespace std;
class Player{
	int *iAge;
	char cName[20]
	;
	public:
	Player()
	{
		cout<<"constructor called"<<endl;
	} 
	//parameterised constructor of player class 
		Player(int *iage,char *cplayername){
			cout<<"Called Constructor";
			iAge=iage;
			strcpy(cName,cplayername);
		}
		void Read(int *iage,char cplayername[]){
			iAge=iage;
			strcpy(cName,cplayername);
		}
	//display function
		void display(){
			cout<<"Age of player::"<<*iAge<<endl;
			cout<<"Name of the player::"<<cName<<endl;
		}
};
   int main(int argc,char *argv[]){
   if(argc == 2)
   {
        cout<<"usage:./a.out"<<endl;
       }
       else
       {
       Player obj;
       int val=30;
	       //passing values through object
    char cname[20]="Sachin";
	obj.Read(&val,cname);
	obj.display();
	
       Player obj2(&val,"Indian Player");
	obj2.display();
	return 0;
}
}
