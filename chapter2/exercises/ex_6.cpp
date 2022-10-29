#include <iostream>

using namespace std;

double calc_year(double);

int main() {
    double year;
    cout << "Enter the number of light years: ";
    cin >> year;

    double result =  calc_year(year);

    cout << year << " light years = " << result << " astronomical units" << endl;
    return 0;
}

double calc_year(double year) {
    return year * 63240;
}
