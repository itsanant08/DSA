#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int depth = 0;
    int ans = 0;

    for (char ch : s) {
        if (ch == '(') {
            depth++;
            ans = max(ans, depth);
        }
        else if (ch == ')') {
            depth--;
        }
    }

    cout << ans << endl;

    return 0;
}