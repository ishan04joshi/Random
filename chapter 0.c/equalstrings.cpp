#include<iostream>
#include <string>

using namespace std;
int i;
int main( )
{
    string s1;
    string s2;

    cout<<"Enter string one: ";
    getline(cin,s1);

    cout<<"Enter string two: ";
    getline(cin,s2);

    for (i = 0; s1[i] == s2[i] && s1[i]!= '\0' && s2[i] != '\0'; i++);
    if(s1[i] - s2[i] == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
    return 0;
}