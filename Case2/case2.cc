/*program:Sum of the squares of the integer
filename:case2.cc
date:08-04-2020
*/


#include <iostream>
using namespace std;
/*Function name : Sumofsquare
 Parameters passed: integer
 return type :int
*/
int Sumofsquare(int iN)
{
	int iSum=0;
	  while(iN > 0)  //checks the number is greater than zero 
		{
			 iSum += iN * iN;  //squares the number and add to the series
				iN-- ;  
		}
	cout<<"\n SUM::"<<iSum<<endl;   //displays the sum value
}
	


int main(int argc,char* argv[])
{
	if(argc==2)	//checks the arguments to display the usage
{
	cout<<"Usage of case2"<<endl;
	cout<<" ./a.out "<<endl;
	cout<<"Displays the Sum of the squares the number"<<endl;
} 
else
{
	int iNum = 0 ;  //variable integer declaration
	cout << "Enter a number: ";  
	cin >> iNum;     //reads the input
	Sumofsquare(iNum);  //fucntion calling
}
	
return 0;
}			
	
