#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter days : " << endl;
    double days;
    cin >> days;
    cout << "Enter hours : " << endl;
    double hours;
    cin >> hours;
    cout << "Enter minutes : " << endl;
    double minutes;
    cin >> minutes;
    cout << "Enter seconds : " << endl;
    double seconds;
    cin >> seconds;
    double totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + (seconds);
    cout << totalSeconds << " , Round = " << round(totalSeconds) << endl;
}