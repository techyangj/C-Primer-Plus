#include <iostream>
#include <string>


using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};



int main() {

    CandyBar snack[3] = 
    {
        {"Mocha Munch", 2.3, 350},
        {"Mocha ", 2.2, 450},
        {"M", 2.1, 550},
    };


    cout << "snack brand = " << snack[0].brand << " snack weight = " << snack[0].weight << " snack calorie = " << snack[0].calorie << endl;
    cout << "snack brand = " << snack[1].brand << " snack weight = " << snack[1].weight << " snack calorie = " << snack[1].calorie << endl;
    cout << "snack brand = " << snack[2].brand << " snack weight = " << snack[2].weight << " snack calorie = " << snack[2].calorie << endl;


    return 0;
}
