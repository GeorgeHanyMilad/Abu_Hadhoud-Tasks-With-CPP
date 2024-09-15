#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter value of a : " << endl;
    double a;
    cin >> a;
    cout << "Enter value of b : " << endl;
    double b;
    cin >> b;
    double circleArea = 3.14159 * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    cout << "Circle Area = " << circleArea << endl;
    cout << "Circle Area = " << floor(circleArea) << endl;
}