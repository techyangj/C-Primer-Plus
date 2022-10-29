#include <iostream>

void simon(int);

using namespace std;

int main() {
    simon(3);

    cout << "Pick an iterger: ";
    int count;

    cin >> count;
    simon(count);

    cout << "Done!" << endl;

    return 0;
    

}

void simon(int n)
{
    cout << "Simon says touch your toes " << n << "times." << endl;
}
