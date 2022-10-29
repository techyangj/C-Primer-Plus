#include <iostream>


using namespace std;

void print_format(int, int);

int main() {
    
    int hour;
    int min;

    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;

    print_format(hour, min);


    return 0;
}
void print_format(int hour, int min)
{
    cout << "Time: " << hour << ":" << min << endl;
}
