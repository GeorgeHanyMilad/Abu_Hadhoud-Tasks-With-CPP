#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter value of a : " << endl;
    double a;
    cin >> a;
    cout << "Enter value of d : " << endl;
    double d;
    cin >> d;
    double Length = sqrt(pow(d, 2) - pow(a, 2));
    double Width = a;
    double rectangleArea = Length * Width;
    cout << "Rectangle Area = " << rectangleArea << endl;
}