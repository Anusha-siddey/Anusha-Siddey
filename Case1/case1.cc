/*case1:Parsing the command line arguments and display the output
 Date 9/04/2020
File name :case1.cc
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
/*
Function name:Verify
Parameters : string
return type : bool
*/
//Verifies the length of the string

bool Verify(string str)
{
        int ik;
        for(ik=0;str.length()==1;ik++)
        {
                return true; // if the string length is 1 then it returns true
        }

}

int main(int argc,char *argv[])  //command line arguments
{
//declaration of the variables
        int Arg;
        int Int;
        float Float;
if(argc==2) //condition to check the argument count is 2
{
        //prints the usage of the program
        cout<<"./program : checks for the command line arguments"<<endl;
        cout<<"uasage ./a.out arg1 arg2 arg3 arg4"<<endl;
}

	else
	{

        for(Arg=1;Arg<argc;Arg++)
        {
        Int=atoi(argv[Arg]); //changes ascii to int
        Float=atof(argv[Arg]); //changes ascii to float
                if(Int==0)
                {
                        if(Verify(argv[Arg]))  //condtion to check the string length and to print's char
                {
                        cout<<"char";
                        cout<<"\t"<<argv[Arg]<< "\t"<<strlen(argv[Arg])<<endl;
                }
                else
                {
                        cout<<"string";
                        cout<<"\t"<<argv[Arg]<< "\t"<<strlen(argv[Arg])<<endl;
                }
}
                else
                {

                        if(Int==Float)  //condition to print the integer
                        cout<<"int"<< "\t"<<Int<<"\t"<<sizeof(Int)<<endl;
                else
                cout<<"float"<< "\t"<<Float<<"\t"<<sizeof(Float)<<endl;
                }
}
return 0;
}


