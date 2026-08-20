#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int i = 0;

    for (int j = 0; j < t.length(); j++) {
        if (i < s.length() && s[i] == t[j]) {
            i++;
        }
    }

    if (i == s.length())

    /*till here for leetcode*/
        cout << "true";
    else
        cout << "false";

    return 0;
}