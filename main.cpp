
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main() {
    char word[20];
    int num = 0;
    int alphabet = 0;
    int low = 0;
    int up = 0;

    cout << "Input characters < 20 " << endl;
    cin >> word;

    for (size_t i = 0; word[i] != '\0'; ++i)                     // C string loops through until '\0' character
    {
        if(std::isalpha(word[i]))
        {
            ++alphabet;
        }

        if(std::isdigit(word[i]))
        {
            ++num;
        }

        if(std::islower(word[i]))
        {
            ++low;
        }
        if(std::isupper(word[i]))
        {
            ++up;
        }
    }
    cout << " From the input [ " << word << " ], there are : " << endl;
    cout << alphabet << " alphabet/s in the input " << endl;
    cout << num << " number/s in the input"  << endl;
    cout << low << " lowercase in the input" << endl;
    cout << up << " uppercase in the input" << endl;
    cout << endl;
    return 0;

}
