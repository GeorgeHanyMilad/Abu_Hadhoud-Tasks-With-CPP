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
    cout << "Enter value of c : " << endl;
    double c;
    cin >> c;
    double p = (a + b + c) / 2;
    double circleArea = 3.14159 * (pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2));
    cout << "Circle Area = " << circleArea << endl;
    cout << "Circle Area = " << round(circleArea) << endl;
}