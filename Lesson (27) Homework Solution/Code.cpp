#include <iostream>

using namespace std;

struct personSalary {
    int monthly;
    int yearly;
};

struct personaStatus {
    char gender;
    bool isMarried;
};

struct personInfo {
    string name;
    int age;
    string city;
    string country;
    personSalary salary;
    personaStatus status;
};

int main() {
    personInfo person;
    person.name = "John";
    person.age = 18;
    person.city = "California";
    person.country = "US";
    person.salary.monthly = 5000;
    person.salary.yearly = 60000;
    person.status.gender = 'M';
    person.status.isMarried = false;

    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << " years"<< endl;
    cout << "City: " << person.city << endl;
    cout << "Country: " << person.country << endl;
    cout << "Monthly Salary: " << person.salary.monthly << endl;
    cout << "Yearly Salary: " << person.salary.yearly << endl;
    cout << "Gender: " << person.status.gender << endl;
    cout << "Married? " << person.status.isMarried << endl;
}