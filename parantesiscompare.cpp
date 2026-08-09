#include <iostream>
#include <string>
using namespace std;

string removeOuterParentheses(string s) {
    int count = 0;
    string ans = "";

    for (int i = 0; i < s.length(); i++) {

        if (s[i] == ')')
            count--;

        if (count != 0)
            ans.push_back(s[i]);

        if (s[i] == '(')
            count++;
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter parentheses string: ";
    cin >> s;

    string result = removeOuterParentheses(s);

    cout << "Answer: " << result << endl;

    return 0;
}