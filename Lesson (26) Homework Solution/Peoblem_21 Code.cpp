#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter value of L : " << endl;
    double L;
    cin >> L;
    double r = L / (2 * 3.14159);
    double circleArea = 3.14159 * pow (r, 2);
    cout << "Circle Area = " << circleArea << endl;
    cout << "Circle Area = " << floor(circleArea) << endl;
}