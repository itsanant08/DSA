#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s) {
    vector<string> ans(10);

    string word;
    stringstream ss(s);

    while (ss >> word) {
        int pos = word.back() - '0';
        word.pop_back();

        ans[pos] = word;
    }

    string result = "";

    for (int i = 1; i <= 9; i++) {
        if (!ans[i].empty()) {
            if (!result.empty())
                result += " ";

            result += ans[i];
        }
    }

    return result;
}

int main() {
    string s;

    getline(cin, s);

    cout << sortSentence(s);

    return 0;
}