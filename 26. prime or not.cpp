// program whether a number is a prime number or not
#include<iostream>
using namespace std;
int main()
{
    int n, i;
	int flag = 1;
    cout<<"Enter a number:";
    cin>>n;
    for (i = 2;i<=n/2 ; i++)
	 {
        if (n % i == 0) 
		{
            flag = 0;
            break;
        }
    }
  
    if (n <= 1)
        flag = 0;
  
    if (flag == 1) {
        cout<<"is a prime number"<<n;
    }
    else {
       cout<<"not a prime number"<<n;
    }
  
    return 0;
}
