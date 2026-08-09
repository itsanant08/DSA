#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string num) {
    int n = num.size();

    for (int i = n - 1; i >= 0; i--) {
        if (num[i] % 2 == 0) {
            // Even, keep searching
        } 
        else {
            return num.substr(0, i + 1);
        }
    }

    return "";
}

int main() {
    string num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Largest odd number: " << largestOddNumber(num);

    return 0;
}