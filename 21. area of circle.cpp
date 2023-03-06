//program of area of circle
#include <iostream>
#define PI 3.141
using namespace std;

  
int main()
{
    float radius, area;
    cout << "Enter radius of circle\n";
    cin >> radius;
    area = PI*radius*radius;
    cout << "Area of circle : " << area; 
    return 0;
}