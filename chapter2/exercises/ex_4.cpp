#include <iostream>

using namespace std;

int cacl_month(int);

int main() {
    int age;
    cout << "Please input your age: " << endl;

    cin >> age;
    
    int result = cacl_month(age);

    cout << "You've been through " << result << " months" << endl;

    return 0;
}

int cacl_month(int age) {
    return age * 12;
}
