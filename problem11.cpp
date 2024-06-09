#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    string reversedString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    // Reverse the string
    for (int i = inputString.length() - 1; i >= 0; i--) {
        reversedString += inputString[i];
    }

    cout << "Reversed string: " << reversedString << endl;

    return 0;
}
