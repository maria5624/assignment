// program to convert a string to Lower case
#include<iostream>
using namespace std;
int main()
{
    char chUpper, chLower;
    int n;
    cout<<"Enter the Character (in Uppercase): ";
    cin>>chUpper;
    n = chUpper;
    n = n+32;
    chLower = n;
    cout<<"\nIts Lowercase: "<<chLower;
    cout<<endl;
    return 0;
}