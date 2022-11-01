#include <iostream>
#include <string>
using namespace std;

int main() {
    
    double input;
    double result[12];
    double total = 0;
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 

    for (int i = 0; i < 12; i++)
    {
        cout << "Please input " << month[i] << " month sales:";
        cin >> input;
        result[i] = input;
    }
    for (int i = 0; i < 12; i++)
    {
        total += result[i];
    }
    cout << "Total: " << total << endl;
    

    return 0;
}
