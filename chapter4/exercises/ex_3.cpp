#include <iostream>
#include <cstring>


using namespace std;


int main() {
    
    const int Size = 20;
    char first_name[Size];
    char last_name[Size];

    cout << "Enter your first name: ";
    cin.getline(first_name, Size);
    cout << "Enter your last name: ";
    cin.getline(last_name, Size);

    cout << "Here's the information in a single string: " << last_name << ", " << first_name << endl;


    return 0;
}
