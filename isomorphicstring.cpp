#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {

        if (s.size() != t.size())
            return false;

        int m1[256] = {0};
        int m2[256] = {0};

        for (int i = 0; i < s.size(); i++) {

            if (m1[s[i]] != m2[t[i]])
                return false;

            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }

        return true;
    }
};

int main() {

    Solution solution;

    string s = "paper";
    string t = "title";

    if (solution.isomorphicString(s, t)) {
        cout << "Strings are isomorphic." << endl;
    }
    else {
        cout << "Strings are not isomorphic." << endl;
    }

    return 0;
}