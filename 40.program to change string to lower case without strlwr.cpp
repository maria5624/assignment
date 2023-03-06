// Write C++ program to change string to lower case without strlwr
#include<iostream>
using namespace std;
int main()
{
               char str[10];
                cout<<"Enter The String : ";
                cin>>str;
                cout<<"\nThe Lowercase of "<<str<<" : ";
                for(int i=0;i<strlen(str);i++)
                                {
                                if((str[i]>=65) && (str[i]<=90))
                                                {
                                                str[i]=str[i]+32;
                                                }
                                }
                cout<<str;
}
  	