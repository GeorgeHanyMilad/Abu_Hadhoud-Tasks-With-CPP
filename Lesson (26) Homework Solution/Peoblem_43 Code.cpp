#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter number of total seconds : " << endl;
    int totalSeconds ;
    cin >> totalSeconds;
    int secondsPerDay = 24 * 60 * 60;
    int secondsPerHour = 60 * 60;
    int secondsPerMinute = 60;
    int Reminder = 0;
    double Days = floor(totalSeconds / secondsPerDay);
    Reminder = totalSeconds % secondsPerDay;
    double Hours = floor(Reminder / secondsPerHour);
    Reminder = Reminder % secondsPerHour;
    double Minutes = floor(Reminder / secondsPerMinute);
    Reminder = Reminder % secondsPerMinute;
    double Seconds = Reminder;
    cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
}