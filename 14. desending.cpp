//Write a program to sort elements of array in descending order.
#include <iostream>
using namespace std;
 
int main()
{
    int arr[5];int i; int j; int temp;
      cout<<"Enter elements in array: ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<5;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted descending order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}