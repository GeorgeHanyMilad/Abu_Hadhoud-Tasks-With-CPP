#include <iostream>
using namespace std;

void displayPersonalInfo() {
    cout << "Task.1" << endl;
    cout << "****************************" << endl;
    cout << "Name   : " << "George Hany Milad." << endl;
    cout << "Age    : " << "21 years." << endl;
    cout << "City   : " << "Fayoum." << endl;
    cout << "Country: " << "Egypt." << endl;
    cout << "****************************\n\n\n\n";
}

void displayPattern() {
    cout << "Task.2\n\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n\n\n\n";
}

void displayMotivationMessage() {
    cout << "Task.3" << endl << endl;
    cout << "I Love Programming!" << endl << endl;
    cout << "I promise to be the best developer ever!" << endl << endl;
    cout << "I know it will take some time to practice, but I" << endl;
    cout << "I will achieve my goal." << endl << endl;
    cout << "Best Regards," << endl;
    cout << "George Hany Milad." << endl << endl << endl << endl;
}

void displayShape() {
    cout << "Task.4\n\n";
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "* * * * *\n";
    cout << "*       *\n";
    cout << "*       *\n";
}

int main() {
    displayPersonalInfo();
    displayPattern();
    displayMotivationMessage();
    displayShape();
    return 0;
}
