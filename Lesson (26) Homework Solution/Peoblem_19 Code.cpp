#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter value of D : " << endl;
    double D;
    cin >> D;
    double circleArea = 3.14159 * pow((D / 2.0), 2);
    cout << "Circle Area = " << circleArea << endl;
    cout << "Circle Area = " << ceil(circleArea) << endl;
}