#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Please enter string1?" << endl;
    string str1;
    getline(cin, str1);
    cout << "Please enter string2?" << endl;
    string str2;
    cin >> str2;
    cout << "Please enter string3?" << endl;
    string str3;
    cin >> str3;

    cout << "The length of string1 is: " << str1.length() << endl;
    cout << "Characters at 0, 2, 4, 7 are: " << str1[0] << " " << str1[2] << " " << str1[4] << " " << str1[7] << endl;
    cout << "Concatenating string2 and string3 = " << str2 + str3 << endl;
    cout << str2 << " * " << str3 << " = " << (stoi(str2) * stoi(str3)) << endl;
}
