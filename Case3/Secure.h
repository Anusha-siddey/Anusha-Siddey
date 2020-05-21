#ifndef SECURE_H_INCLUDED
#define SECURE_H_INCLUDED


#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Secure
{
    private:
    char text[100];
    int position;
    char character,replacechar,accept='y';
    fstream originalfile;
    fstream Encryptfile;

    public:
        Secure();
    ~Secure();
    bool Encryption(char*,char*);
    bool Decryption(char*,char*);
};
#endif // SECURE_H_INCLUDED
