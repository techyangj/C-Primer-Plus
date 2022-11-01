#include <iostream>

using namespace std;

int main() {

    cout << "Please input a number: " << endl;
    int a;
    cin >> a;
    cout << "Please input another number: " << endl;
    int b;
    cin >> b;
    
    if (a > b) {
        int temp = 0;
        temp = a;
        a = b;
        b = temp;
    }
    int result = 0;

    for(; b >= a; a++)
    {
        result += a;
    }

    cout  << result << endl;
     


    return 0;
}
