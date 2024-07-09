#include <iostream>
#include <string.h> 
using namespace std;
int main() {
    float radius,pi=3.1415,sum;
    cout << "Program Calculate Area Circle.\n";
    cout << "Circle radius (real number) ? ";
    cin >> radius;
    sum = pi*radius*radius;
    cout << "Area of circle with radius "<< radius << " is " << sum;
    return(0);
}