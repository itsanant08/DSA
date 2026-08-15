#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a[256] = {0};

    for(char x : s)
        a[x]++;

    sort(s.begin(), s.end(), [&](char x, char y) {
        return a[x] > a[y];
    });

    cout << s;

    return 0;
}