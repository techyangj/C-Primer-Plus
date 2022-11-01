#include <iostream>

using namespace std;


int main() {
    
    
    double Daphne_dollor = 100;
    double Cleo_dollor = 100;
    int count = 0;

    while(Daphne_dollor >= Cleo_dollor){
        Daphne_dollor = Daphne_dollor + 100  * 0.1;
        
        Cleo_dollor = Cleo_dollor + Cleo_dollor * 0.05;
        count += 1;
    }

    cout << "Daphne dollor = " << Daphne_dollor << endl;
    cout << "Cleo dollor = " << Cleo_dollor << endl;
    cout << "years = " << count << endl;

    return 0;
}
