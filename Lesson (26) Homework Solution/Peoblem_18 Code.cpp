#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter value of r : " << endl;
    double r;
    cin >> r;
    double circleArea = 3.14159 * pow(r, 2);
    cout << "Circle Area = " << circleArea << endl;
    cout << "Circle Area = " << ceil(circleArea) << endl;
}