#include <iostream>
#include <string>
using namespace std;

int main() {
    
    double input;
    double result[3][12];
    double total = 0;
    string month[3][12] = {
        {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"},
        {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"},
        {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"},
    }; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << "Please input the "<< i+1 << " year " << month[i][j] << " month sales:";
            cin >> input;
            result[i][j] = input;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
            total += result[i][j];
    }
    cout << "Total: " << total << endl;
    

    return 0;
}
