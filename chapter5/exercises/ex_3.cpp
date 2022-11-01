#include <iostream>

using namespace std;


int main() {

    cout << "Please input your number: ";
    int a;
    cin >> a;
    
    int result = a;

    while(a != 0){
        cout << "Sum = " << result << endl; 
        cin >> a;
        result += a;
    }


    return 0;
}
