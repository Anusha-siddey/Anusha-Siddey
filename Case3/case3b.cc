//program that explains the type modifiers

#include <iostream>
using namespace std;

// main function
int main(int argc,char* argv[])
{
        if(argc==2)
        {
                cout<<"Usage: ./a.out"<<endl;
                cout<<"Explains the type modifiers"<<endl;
        }
else
{

  short int value1;
  long int value2;
  unsigned short value3;
  signed short value4;

  cout << "enter value: ";
  cin>>value2;
  value1=value3=value4=value2;    //value of value1, value2, value3 and value4 is assigned same

  cout << " short int value1 = " << value1 << endl;        //outputs of the values
  cout << " long int value2 = " << value2 << endl;
  cout << " unsigned short value3 = " << value3 << endl;
  cout << " signed short value4 = " << value4 << endl;
 }
  return 0;
}
