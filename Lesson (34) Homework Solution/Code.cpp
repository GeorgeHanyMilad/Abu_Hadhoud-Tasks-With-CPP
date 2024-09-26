#include <iostream>

using namespace std;

void mySumProcedure() {
    int Number1;
    cout << "Please enter Number1?\n";
    cin >> Number1;

    int Number2;
    cout << "Please enter Number2?\n";
    cin >> Number2;

    cout << Number1 + Number2 << endl;
}

int mySumFunction() {
    int Num1;
    cout << "Please enter Number1?\n";
    cin >> Num1;

    int Num2;
    cout << "Please enter Number2?\n";
    cin >> Num2;

    return Num1 + Num2;
}

int main() {
    mySumProcedure();
    cout << mySumFunction() << endl;
    return 0;
}
