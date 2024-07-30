#include <iostream>
using namespace std;

int main() {
	cout << '\n';
	cout << "Task.1\n\n";
	string Name = "George Hany Milad";
	int Age = 21;
	string City = "Fayoum";
	string Country = "Egypt";
	float Monthly_Salary = 5000;
	float Yearly_Salary = Monthly_Salary * 12;
	char Gender = 'M';
	bool IsMarried = true;
	cout << "********************************\n";
	cout << "Name: " << Name << '\n';
	cout << "Age: " << Age << " years" << '\n';
	cout << "City: " << City << '\n';
	cout << "Country: " << Country << '\n';
	cout << "Monthly Salary: " << Monthly_Salary << '\n';
	cout << "Yearly Salary: " << Yearly_Salary << '\n';
	cout << "Gender: " << Gender << '\n';
	cout << "Married: " << IsMarried << '\n';
	cout << "********************************\n\n\n";

	cout << "Task.2\n\n";
	int Number_1 = 20, Number_2 = 30, Number_3 = 10;
	int Sum = Number_1 + Number_2 + Number_3;
	cout << Number_1 << " +" << endl;
	cout << Number_2 << " +" << endl;
	cout << Number_3 << endl;
	cout << "--------------" << endl;
	cout << "Total = " << Sum << "\n\n\n";

	cout << "Task.3\n\n";
	int My_Age = 25;
	int Your_Age_After_Five_Years = My_Age + 5;
	cout << "After 5 years you will be " << My_Age + 5 << " years old." << endl;
	cout << "After 5 years you will be " << Your_Age_After_Five_Years << " years old." << endl;
}