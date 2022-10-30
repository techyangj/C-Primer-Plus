#include <iostream>


using namespace std;

// 1英尺=12英寸
// 英尺(ft)
// 英寸(in) 
const int factor = 12;



int main() {

    cout << "Please input your height(in):__\b\b";
    int in;
    cin >> in;
    
    int result_in = in / factor;
    int result_ft = in % factor;
    cout << "Your ft = " <<  result_in << endl;
    cout << "Your in = " << result_ft << endl;
    
    

    return 0;
}
