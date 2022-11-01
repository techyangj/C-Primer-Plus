#include <iostream>
#include <string>

using namespace std;


int main() {

    string list_word;
    cout << "Enter words (to stop, type the word done):" << endl;
    int count = 0;
    cin >> list_word;
    
    while(list_word != "done")
    {
        cin >> list_word;
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;


    return 0;
}
