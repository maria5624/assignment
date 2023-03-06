//program of area of rectangle
#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
   int length, breadth, area;
   cout << "Enter length of rectangle : ";
   cin >> length;
    cout << "Enter breadth of rectangle : ";
   cin >> breadth;
   area = length * breadth;
   cout << "Area of rectangle : " << area;
   
   return 0;
}