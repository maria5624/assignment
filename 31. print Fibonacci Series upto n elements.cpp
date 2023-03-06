//program to print following 1,1,2,3,5,8..., print the series utpo n elements
#include <iostream>
using namespace std;
int main()
 {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
	 {
        if(i == 1) 
		{
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) 
		{
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}