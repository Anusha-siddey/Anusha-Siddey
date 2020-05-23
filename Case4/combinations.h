#ifndef COMBINATIONS_H_INCLUDED
#define COMBINATIONS_H_INCLUDED
using namespace std;
class Combinations
{
    private:
    vector<string> result;
    string charmap[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> tempresult;
    string chars;
    int digitsposition,resultposition,charsposition;

public:
    Combinations();
    ~Combinations();
vector<string> letterCombinations(string digits);
};

#endif // COMBINATIONS_H_INCLUDED
