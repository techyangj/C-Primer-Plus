#include <iostream>


using namespace std;

// 1英尺=12英寸
// 英尺(ft)
// 英寸(in) 
const int ft_in_factor = 12;
const double m_convert = 0.0254;
const double weight_convert = 2.2;


int main() {

    cout << "Please input your ft: ";
    int ft;
    cin >> ft;
    
    cout << "Please input your in: ";
    int in;
    cin >> in;

    cout << "Please input your weight: ";
    double weight;
    cin >> weight;


    double result_in = (ft * ft_in_factor + in) * m_convert;
    double result_weight = weight / weight_convert;
    double result = result_weight / result_in;

    cout << "BMI = " << result << endl; 
    
    return 0;
}
