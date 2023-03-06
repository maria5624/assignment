//Write C++ program to change string to upper case without strupr
#include<iostream>
using namespace std;
int main()
{
                char str[10];
                cout<<"Enter The String : ";
                cin>>str;
                cout<<"\nThe Uppercase of "<<str<<" : ";
                for(int i=0;i<strlen(str);i++)
                                {
                                if((str[i]>=97) && (str[i]<=122))
                                                {
                                                str[i]=str[i]-32;
                                                }
                                }
                cout<<str;
              return 0;
}