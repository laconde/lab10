// Character array that prompts user their last name and displays it.

// Alberto Conde
// November 12, 2020

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char last[10];
    cout << "Please enter your last name using no more than 9 letters" << endl;
    cin.getline(last,9);
    cout << "Your last name is " << last;
    cout << endl;

    return 0;
}
// When using getline, it saves in the memory space only the first 9 characters.


