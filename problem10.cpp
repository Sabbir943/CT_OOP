#include <iostream>
using namespace std;

int main() {
    int number;
    int positiveCount = 0;
    int negativeCount = 0;

    cout << "Enter numbers (enter 0 to stop):" << endl;

    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        }
    }

    cout << "Count of positive numbers: " << positiveCount << endl;
    cout << "Count of negative numbers: " << negativeCount << endl;

    return 0;
}
