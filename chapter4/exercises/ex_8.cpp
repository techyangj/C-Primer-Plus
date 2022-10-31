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

    Pizza * pizza = new Pizza;

    cout << "Please input Pizza company: ";
    getline(cin, pizza->company);
    cout << "Please input Pizza diameter: ";
    cin >> pizza->diameter;
    cout << "Please input Pizza weight: ";
    cin >> pizza->weight;
    

    cout << "company = " << pizza->company << " diameter = " << pizza->diameter << " weight = " << pizza->weight << endl; 

    delete pizza;

    return 0;
}
