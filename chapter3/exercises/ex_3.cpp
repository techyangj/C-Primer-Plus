#include <iostream>

using namespace std;

const int convert = 60;

int main() {

    cout << "Enter a latitude in degrees, minutes, and seconds: "<< endl;
    cout << "First, enter the degrees: ";
    double degrees;
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    double minutes;
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    double seconds;
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds " << " = " << degrees + minutes / convert + seconds / convert / convert << " degrees " << endl;


    return 0;
}
