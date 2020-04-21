/*Program to Add,delete,read & display the config from the file 
filename: case7.cc
Date:20/04/2020
*/

#include <iostream>
#include <fstream>
#include<map>
#include<string>
#include<stdlib.h>
using namespace std;
class notes
{
        public:
                string key,item;
        public:
		
                map<string,string>mp;
                map<string,string>::iterator it;
                 fstream fil;

		//function to add the config to a file
        void Addconfig()
        {
                char ch='y';

		//open a file to write the config 
                fil.open("example.ini",ios::out|ios::app);
                while(ch=='y'|| ch=='Y')
                {
                        cout<<"Enter the key "<<endl;
                        cin>>key;
                        cout<<"Enter the item name"<<endl;
                        cin>>item;
			//inserts the key and value to mapfile
                        mp.insert(pair<string,string>(key,item)); 
                        fil<<key<<"\t"<<item<<endl;
                      	cout<<"Want to continue(Y/y||n/N)::";
                        cin>>ch;
                }
			//closes the file
                        fil.close();
        }

	//function to read and display from the file
         void Displayconfig()
        {
                 ifstream fil;
		//opens the file in the read mode
                fil.open("example.ini",ios::in);
                        // Reding from file
			//loop for checking the end of file and read up to the end
                if(!fil.eof())
                {
                        for (it = mp.begin(); it != mp.end(); it++)
                cout << (*it).first << "\t " << (*it).second << endl;

                }
                //closing the file
                        fil.close();
        }

	//function to delete the key and value in the file
        void Deleteconfig()
        {	
        	string str ;
        	cout<<"key to delete"<<endl;
        	cin>> str ;
		//file opens in the read and write mode
            fil.open("example.ini",ios::in|ios::out); 
            for (it = mp.begin(); it != mp.end(); it++)
            {
		//condition to find the key in the file
            	if(it==mp.find(str)) 
          
		//fucntion that delete the content by key 
            	mp.erase(it);		
	    }
	}
	//function to search by key
	void searchconfig()
	{
		string str1;
		cout<<"Key to search in the file"<<endl;
		cin>>str1;

		//file opens in the read and write mode
		fil.open("example.ini",ios::in|ios::out);
		
            for (it = mp.begin(); it != mp.end(); it++)
		{
			//loop to find the key
			if(it==mp.find(str1))
			{
				cout<<"key is found"<<endl;
			}
		}
	}
};
int main(int argc,char* arv[])
{
	//condition to display the usage of the program by -h/-help
	if(argc==2)
	{
		cout<<"Usage :: ./a.out"<<endl;
		cout<<" program to ADD,DELETE,DISPLAY,SEARCH to a file"<<endl;
	}

else
	{
        int option;
         notes n;
        while(1)
        { 
		//Displays the menu for the file operations

		cout<<"----------------------------"<<endl;
                cout<<"1.Add to file"<<endl;
                cout<<"2.read from file"<<endl;
                cout<<"3.delete"<<endl;
                cout<<"4.Search with key"<<endl; 
		 cout<<"5.Exit"<<endl;
		cout<<"----------------------------"<<endl;
                cout<<"Enter your option::"<<endl;
                cin>>option;
		cout<<"-----------------------------"<<endl;
                	
		//switch case for the options to select
		switch (option)
                {
                         case 1:
                                n.Addconfig();
                                break;
                         case 2:
                                 n.Displayconfig();
                                break;
                        case 3:
                                n.Deleteconfig();
                                break;
			case 4:
				n.searchconfig();
				break;
                        case 5:
                                exit(1);
                                break;
            default: cout<<"Enter the option";
                    break;
    }
}

}
    return 0;

}

