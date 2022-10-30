#include <iostream>

using namespace std;


int main() {

    cout << "Enter the world's population: ";
    long long world_pop;
    cin >> world_pop;
    
    cout << "Enter the population of the US: ";
    long long us_pop;
    cin >> us_pop;

    double result = double(us_pop) / world_pop;
    cout << "The population of the US is " << result * 100 << "%" << " of the world population." << endl;

    return 0;
}
