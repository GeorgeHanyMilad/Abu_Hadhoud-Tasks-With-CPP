#include <iostream>
#include <string>
using namespace std;

int main() {
    // Point #1
    string st1 = "43.22";
    double st1_d = stod(st1);
    float st1_f = stof(st1);
    int st1_i = stoi(st1);

    // Point #2
    int N1 = 20;
    string st2 = to_string(N1);

    // Point #3
    double N2 = 33.5;
    string st3 = to_string(N2);

    // Point #4
    float N3 = 55.23;
    int num;
    string st4 = to_string(N3);
    num = N3;
    num = (int) N3;
    num = int(N3);
}