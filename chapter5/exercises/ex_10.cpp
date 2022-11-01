#include <iostream>

using namespace std;

int main() {

    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    int temp;
    for(int i = 0; i < row; i++)
    {
        temp = row - i; 
        for(; temp != 1 ;temp--)
        {
            cout << ".";
        }
        temp = row - i - 1;
        for(;temp != row; temp++)
        {
           cout << "*"; 
        }
        


        cout << endl;
    }


    return 0;
}
