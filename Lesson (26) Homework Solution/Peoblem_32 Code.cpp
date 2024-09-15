#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter number : " << endl;
    double number;
    cin >> number;
    cout << "Enter M : " << endl;
    double M;
    cin >> M;
    cout << pow(number, M) << " , Round = " << round(pow(number, M)) << endl;
}