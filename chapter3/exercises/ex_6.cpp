#include <iostream>

using namespace std;

int main() {
    
    cout << "Please input your mile: ";
    double mile;
    cin >> mile;
    cout << "Please input your used gallon: ";
    double gallon;
    cin >> gallon;

    cout << "1 gallon can run " << mile / gallon << " miles" << endl;


    return 0;
}
