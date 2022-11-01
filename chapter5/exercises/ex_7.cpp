#include <iostream>
#include <string>

using namespace std;

struct Car {
    string producer;
    int year;
};

int main() {
 
    cout << "How many cars do you wish to catalog? ";
    int many;
    cin >> many;

    Car * car = new Car [many];
    for (int i = 0; i < many; i++) 
    {
        cout << "Car #" << i+1 << ":"<< endl;
        cout << "Please enter the make:";
        if(i == 0)
        {
            getline(cin, car[i].producer);
            getline(cin, car[i].producer);
        }else {
            getline(cin, car[i].producer);
        }

        cout << "Please enter the year made: ";
        (cin >> car[i].year).get();
    }

    cout << "Here is your collection:" << endl;

    for (int i = 0; i < many; i++)
    {
        cout << car[i].year << " "<< car[i].producer <<endl;
    }

    delete [] car;

    return 0;
}
