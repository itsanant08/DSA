#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool winnerSquareGame(int n) {

        vector<bool> dp(n + 1, false);

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j * j <= i; j++) {

                // If opponent gets a losing position
                if (dp[i - j * j] == false) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};

int main() {

    Solution solution;

    int n;
    cout << "Enter number of stones: ";
    cin >> n;

    if (solution.winnerSquareGame(n)) {
        cout << "Alice wins." << endl;
    }
    else {
        cout << "Alice loses." << endl;
    }

    return 0;
}