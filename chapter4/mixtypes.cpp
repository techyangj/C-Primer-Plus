#include <iostream>

using namespace std;

struct antarctica_years_end
{
    int year;

};

int main() {

    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end troi[3];
    troi[0].year = 2003;
    cout << troi->year << endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;

    cout << (*ppa)->year << endl;
    cout << (*(ppb + 1))->year << endl;
     


    return 0;
}
