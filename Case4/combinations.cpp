#include<iostream>
#include<vector>
#include<string.h>
#include "combinations.h"

//Default constructor
Combinations::Combinations()
{
    int digitsposition=0,resultposition=0,charsposition=0;
    cout<<" From Default constructor"<<endl;
}
/*
Functio Name: LetterCombinations
Parameters : string digits
Prints letter combinations in lexicographical order
*/
vector<string>Combinations::letterCombinations(string digits)
{
    //takes the result and push to the vector
    result.push_back("");
    //loop for the digits
    for (digitsposition = 0; digitsposition < digits.size(); digitsposition++)
    {
         chars = charmap[digits[digitsposition] - '0'];
        //inner loop for the digits loop, it will take letters for the given digit
        for (charsposition = 0; charsposition < chars.size();charsposition++)
        {
            //inner loop for the characters-loop,It will iterate for the times of the size of the result set.
            for (resultposition = 0; resultposition < result.size();resultposition++)
            {

                 tempresult.push_back(result[resultposition]+chars[charsposition]);
            }
        }
          result=tempresult;
    }
    return result;
}
//Destructor
Combinations::~Combinations()
{
    cout<<"From Destructor"<<endl;
}

int main(int argc,char* argv[])
{
//Condition to Display the -h i.e., the usage of the program
    if((argc==2) && (strcmp(argv[1],"-h")==0))
    {
        cout<<"Usage of the porgram"<<endl;
        cout<<"Displays the combinations of the given digits"<<endl;
    }
    else
        {
            //Class Object
            Combinations object;
            string digits;
            //reads the Digits from the user
            cout<<"Enter the digits to display the combinations::";
            cin>>digits;
            //function is invoked
            vector<string> result;
            result= object.letterCombinations(digits);
    for (auto &index : result)
    {
            for (auto &position : index)
                cout << position;
            cout << ' ';
    }
        cout << endl;
}
}
