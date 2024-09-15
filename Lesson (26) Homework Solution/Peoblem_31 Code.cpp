#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter number : " << endl;
    double number;
    cin >> number;
    cout << pow(number, 2) << " , Round = " << round(pow(number, 2)) << endl;
    cout << pow(number, 3) << " , Round = " << round(pow(number, 3)) << endl;
    cout << pow(number, 4) << " , Round = " << round(pow(number, 4)) << endl;
}