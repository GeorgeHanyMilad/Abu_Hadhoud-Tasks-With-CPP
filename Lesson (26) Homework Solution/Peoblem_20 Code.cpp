#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter value of A : " << endl;
    double A;
    cin >> A;
    double circleArea = 3.14159 * pow((A / 2.0), 2);
    cout << "Circle Area = " << circleArea << endl;
    cout << "Circle Area = " << ceil(circleArea) << endl;
}