#include <iostream>

using namespace std;

int convert(int);

int main() {
    int distance;
    cout << "Please input your distance: (long)" << endl;
    cin >> distance;
    
    int result = convert(distance);

    cout << "The result is: " << result << endl;


    return 0;
}

int convert(int distance)
{
    return distance * 220;
}
