#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
class Secure
{
public:
    char str[100];
public:
    //Fucntion to Encrypt the file
    void Encrypt(char* filename,char* passWord)
    {
        // Copying from oldFile.txt to newFile.txt in Excrypted way
        ifstream oldFile2(filename);
        ofstream newFile2("Encrypted.txt");
        char str[100];char *pw="xyz";
        char ch='y';
        if(!oldFile2)
        {
            cout<<"The File not exist to encrypt"<<endl;
        }
        if(strcmp(pw,passWord)!=0) //condition to compare the password
        {
                cout<<"You Entered WRONG PASS WORD...";
                getchar();
        }
        else
        {
           cout<<"Password Matched ......"
            <<"Want to Display the after decoding(Y||y/N||n)"<<endl;
            cin>>ch;
            getchar();
            if(ch=='n'||ch== 'N')
            {
                exit(0);
            }


            else
                {
                    //content in the file is Encrypted and saved to a another file
        while(!oldFile2.eof())
        {
                oldFile2>>str;
                strrev(str);
                newFile2<<str;
                if(!oldFile2.eof())
                newFile2<<"*";
        }
        oldFile2.close();
        newFile2.close();
                }
        // Display Encrypted Text of newFile, if passWord is matched...
        ifstream newFile3;
        newFile3.open("Encrypted.txt");
        char c;
        while(!newFile3.eof())
        {
                newFile3>>c;
                cout<<c;
        }
        }
        cout<<endl;
        }

//function to decrypt the file
    void Decrypt(char* filename,char* passWord)
    {
         char *pw="xyz";//passWord[15];
     char ch='y',chr,text[100];
     int position;
     ifstream newFile4;
     newFile4.open(filename) ;
       if(!newFile4)
       {
           cout<<"File Doesnot exist"<<endl;
       }

        //comparing the password
        if(strcmp(pw,passWord)!=0)
        {
                cout<<"You Entered WRONG PASS WORD...";
                cout<<"Better luck next time..."<<endl;
        }
        else  //if the password match then the decrypted content is displayed
        {
           cout<<"Password Matched ......"
            <<"Want to Display the after decoding(Y||y/N||n)"<<endl;
            cin>>ch;
            getchar();
            //if the user option is y then it display the content in an decrypted form
            if(ch=='n'||ch== 'N')
            {
                exit(0);
            }
			while(!newFile4.eof())
	 		{

	 			newFile4>>chr;
	 			if(chr=='*')
	 			{
                    strrev(text) ;
					cout << text ;

					if(!newFile4.eof())
						cout<<" " ;
                 position=0;
				}

				else
		   			text[position++]=chr;
	 		}


			newFile4.close();

        }
    }

};
int main(int argc,char* argv[])
{
    Secure Sec;
    int pos;
    // condition to display the -h i.e., the usage of the program
    if((argc==2) && (strcmp(argv[1],"-h")==0))
    {
        cout<<"Usage of the porgram"<<endl;
        cout<<"argv[1] -e/-d argv[2]filename argv[3]key value"<<endl;
    }
    else if(argc>=2)
    {
        //loop for the argument count
        for(pos=1;pos<=argc;pos++)
        {
//checks for the -e command line argument to encrypt the content
        if(strcmp(argv[pos],"-e")==0)
           {
               cout<<"Encryption of the file"<<endl;
               Sec.Encrypt(argv[2],argv[3]);
           }
           //checks for the -d command line argument to decrypt the content
           if(strcmp(argv[pos],"-d")==0)
           {
               cout<<"Decryption of the file"<<endl;
               Sec.Decrypt(argv[2],argv[3]);
           }
        }

    }
    return 0;
}

