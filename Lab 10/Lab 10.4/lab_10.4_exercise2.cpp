#include <iostream>
#include <cstring>
using namespace std;

// This program demonstrates how to use strcat

// Alberto Conde
// November 24, 2020

int main()
{
    char string1[20] ="Total Eclipse ";
    char string2[11] ="of the Sun";
    
    cout << string1 << endl;
    cout << string2 << endl;
    
    strcat(string1,string2);
    
    cout << string1 << endl;
}

// I get an error from the compiler. The string1 is not big enough to hold both string1 and string2. Since there are 24 characters in the sentece, the string must be able to hold a total of 25 characters (to include the null character).
