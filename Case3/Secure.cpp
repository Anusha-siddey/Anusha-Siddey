/*The Encryption of the File and decryption of the file
Fileame: Secure.cpp
By : Anusha Siddey
*/
#include "Secure.h"

/*
Function name::Encryption
Formal Parameters:: char* Filename,char* Password
Return type:void
Encryption::to reverse the content of the file and save it to a another file
And also write the key to a file
  */
    void Secure::Encryption(char* Filename,char* Password)
    {
        //Copying the content from the original file to the Encryption file
        Encryptfile.open("Encrypt.txt",ios::out);
        originalfile.open(Filename,ios::in);
        //checks the file is exist or not
        if(!originalfile)
        {
            cout<<"File doesnot exist";
            exit(0);
        }
        else
            {
                //it reverse the password
                strrev(Password);
                //writes the password to a file
                Encryptfile<<Password;
                Encryptfile<<endl;
                //reads the character that should replace with the whitespace
                cout<<"Enter the character to replace with whitespace while Encryption::";
                cin>>replacechar;

                while(!originalfile.eof())
                    {

                        //reads the content from the file
                        originalfile>>text;
                        //reverse the each word of the content file
                        strrev(text);
                        //write the reversed content to the file
                        Encryptfile<<text;
                        //checks that not the end of the file
                        if(!Encryptfile.eof())
                            //replace the whitespace with the character entered by the user
                            Encryptfile<<replacechar;
                            //display the encrypted or reversed content of a file
                            cout<<replacechar;
                            cout<<text;
                    }
                        //closes the file
                        originalfile.close();
                        Encryptfile.close();
            }

    }
    /*
    Function name:Decryption
    Return type:void
    Formal Parameters:char* filename,char* password
    Decryption::to reverse the encrypted text to original text of the given file
    */
    void Secure::Decryption(char* Filename,char* password)
    {
            string Password,AssignPassword;
            char removechar;
            Encryptfile.open(Filename,ios::in);
            //condition to check for the file exist
                if(!Encryptfile)
                    {
                        cout<<"file doesnot exist"<<endl;
                        exit(0);
                    }
                else
                    {
                        //to get the string password from the file
                        getline(Encryptfile,Password);
                        //assigning the char* to a string for the key comparison
                        AssignPassword=strrev(password);
                        //checks for the key is equal or not
                if(AssignPassword.compare(Password)!=0)

                        cout<<"given Password is Wrong"<<endl;
                     else
                     {

                        cout<<"Enter the character that should replace::"<<endl;
                        cin>>replacechar;
                while(!Encryptfile.eof())
                    {

                            Encryptfile>>character;
                            //checks for the newline and reads from the new line after the password in the file
                        if(character==replacechar||character=='\n')
                            {
                                //text of the position is null character
                                text[position]='\0';
                                position=0;
                                //reverse the content and brings it to decrypted way and displays
                                strrev(text) ;
                                cout <<text ;
                                if(!Encryptfile.eof())
                                cout<<" " ;
                            }
                        else
                            text[position++]=character;
                    }

                    }
                            //closes the file

                        Encryptfile.close();
                }
    }

int main(int argc,char* argv[])
{
    Secure Secobject;
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
               Secobject.Encryption(argv[2],argv[3]);
           }

           //checks for the -d command line argument to decrypt the content
           if(strcmp(argv[pos],"-d")==0)
           {
               cout<<"Decryption of the file"<<endl;
               Secobject.Decryption(argv[2],argv[3]);
           }
        }

    }
    return 0;
}
