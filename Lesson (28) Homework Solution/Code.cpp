#include <iostream>

using namespace std;

enum Name { George, John, Mina, Fady };
enum Age { One=18, Two=22, Three=30, Four=65 };
enum City { Alexandria, Giza, Luxor, Aswan, Ismailia , Suez , Hurghada  };
enum Country { Egypt, France, Germany, Brazil };
enum monthlySalary { First=1000, Second=2000, Third=3000, Fourth=4000 };
enum yearlySalary { Fst=1000, Sed=2000, Trd=3000, Fth=4000 };
enum Gender { Male, Female };
enum isMarried { Single, Married };


int main() {
    Name myName;
    Age myAge;
    City myCity;
    Country myCountry;
    monthlySalary myMonthlySalary;
    yearlySalary myYearlySalary;
    Gender myGender;
    isMarried myIsMarried;

    myName = Name::George;
    myAge = Age::One;
    myCity = City::Alexandria;
    myCountry = Country::Egypt;
    myMonthlySalary = monthlySalary::Second;
    myYearlySalary = yearlySalary::Fth;
    myGender = Gender::Male;
    myIsMarried = Single;
}