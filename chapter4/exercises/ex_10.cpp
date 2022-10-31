#include <iostream>
#include <array>

using namespace std;

int main(){

    array<double, 3> score;
    cout << "Please input your first score: ";
    cin >> score.at(0);
    cout << "Please input your second score: ";
    cin >> score.at(1);
    cout << "Please input your third score: ";
    cin >> score.at(2);

    double result = (score[0] + score[1] + score[2]) / 3.0;

    cout << "Average = " << result << endl;

    return 0;
} 
