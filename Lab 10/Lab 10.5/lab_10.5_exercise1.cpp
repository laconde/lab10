#include <iostream>
#include <cstring>
using namespace std;

// This program demonstrates the use of strlen and tells whether the word is a palindrome.

// Alberto Conde
// November 24, 2020

int main()
{
    char palindrome[51];
    int length, count = 0;
    bool flag = true;
    
    cout << "Enter a sentence of no more than 50 characters:\n" << endl;
    cin.getline(palindrome,50);
    
    length = strlen(palindrome);
    
    for (count = 0 ; count < length ; count++)
    {
        if (palindrome[count] == palindrome[length-count])
        {
            flag = false;
            cout << "This is not a palindrome." << endl;
            break;
        }
    }
    if (flag)
        cout << "This is a palindrome" << endl;
    return 0;
    
    

}


