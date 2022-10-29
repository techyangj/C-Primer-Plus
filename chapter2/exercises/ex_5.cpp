#include <iostream>

using namespace std;


double calc_grade(double);

int main() {

    double centigrade;

    cout << "Please enter a Celsius value: ";
    cin >> centigrade;

    double result =  calc_grade(centigrade);

    cout << centigrade << " degrees Celsius is " << result << " degrees Fahrenheit" << endl;

    return 0;
}

double calc_grade(double centigrade){
    return  centigrade * 1.8 + 32.0;
}
