#include <iostream>
#include <string>

using namespace std;

struct Pizza 
{
    string company;
    double diameter;
    double weight;
};


int main() {

    cout << "Please input Pizza company: ";
    string com;
    getline(cin, com);
    cout << "Please input Pizza diameter: ";
    double diam;
    cin >> diam;
    cout << "Please input Pizza weight: ";
    double weig;
    cin >> weig;

    Pizza pizza = {
        com, diam, weig
    };
    cout << "company = " << pizza.company << " diameter = " << pizza.diameter << " weight = " <<pizza.weight << endl; 


    return 0;
}
