#include <iostream>

using namespace std;

const int day_convert = 365;
const int  hours_convert = 24;
const int  min_convert = 60;
const int second_convert = 60;
 

int main() {

    cout << "Enter the number of seconds: ";
    long long seconds;
    cin >> seconds;

    int day = seconds / second_convert / min_convert / hours_convert;
    int hours = seconds / second_convert / min_convert - day * hours_convert;
    int minutes = seconds / second_convert - hours * min_convert - day * hours_convert * min_convert;
    int sec = seconds - day * hours_convert * min_convert * second_convert - hours * min_convert * second_convert - minutes * second_convert;

    cout << seconds << " seconds = " << day << " days, " << hours << " hours, " << minutes << " minutes, " << sec << " seconds." << endl;
    return 0;
}
