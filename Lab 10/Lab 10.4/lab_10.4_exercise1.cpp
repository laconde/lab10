#include <iostream>
#include <cstring>
using namespace std;

// This program demonstrates how to use strcat

// Alberto Conde
// November 24, 2020

int main()
{
    char string1[25] ="Total Eclipse ";
    char string2[11] ="of the Sun";
    
    cout << string1 << endl;
    cout << string2 << endl;
    
    strcat(string1,string2);
    
    cout << string1 << endl;
}

// Total Eclipse
// of the Sun
// Total Eclipse of the Sun
// Program ended with exit code: 0
