#include <iostream>
#include <cstring>

using namespace std;


int main() {

    char list_word [10];
    cout << "Enter words (to stop, type the word done):" << endl;
    int count = 0;
    cin >> list_word;
    
    while(strcmp("done", list_word))
    {
        cin >> list_word;
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;


    return 0;
}
