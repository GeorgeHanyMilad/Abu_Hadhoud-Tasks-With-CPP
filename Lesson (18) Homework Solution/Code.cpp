#include <iostream>
using namespace std;

int main() {
	cout << '\n';
	cout << "Task.1\n\n";
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool IsMarried;
	cout << "Please enter your name ?" << endl;
	cin >> Name;
	cout << "Please enter your age ?" << endl;
	cin >> Age;
	cout << "Please enter your city ?" << endl;
	cin >> City;
	cout << "Please enter your country ?" << endl;
	cin >> Country;
	cout << "Please enter your monthly salary ?" << endl;
	cin >> MonthlySalary;
	cout << "Please enter your gender M/F ?" << endl;
	cin >> Gender;
	cout << "Are you married ? 1 / 0" << endl;
	cin >> IsMarried;
	cout << "************************" << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "City: " << City << endl;
	cout << "Country: " << Country << endl;
	cout << "Monthly Salary: " << MonthlySalary << endl;
	cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Married: " << IsMarried << endl;
	cout << "************************" << endl << endl << endl;

	cout << "Task.2\n\n";
	int a, b, c;
	cout << "Please enter the first number ?" << endl;
	cin >> a;
	cout << "Please enter the second number ?" << endl;
	cin >> b;
	cout << "Please enter the third number ?" << endl;
	cin >> c;
	cout << endl;
	int Sum = a + b + c;
	cout << a << " +" << endl;
	cout << b << " +" << endl;
	cout << c << endl;
	cout << "----------" << endl;
	cout << "Total = " << Sum << endl << endl << endl;

	cout << "Task.3\n\n";
	int age;
	cout << "Please enter your age ?" << endl;
	cin >> age;
	int YourAgeAfter5Years = age + 5;
	cout << "After 5 years you will be " << YourAgeAfter5Years << " years old." << endl;
}