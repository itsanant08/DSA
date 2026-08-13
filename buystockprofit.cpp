#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int i = 0;
        int j = 1;
        int diff = 0;

        while (j < n) {

            if (prices[i] > prices[j]) {
                i = j;
            }
            else {
                int ans = prices[j] - prices[i];
                diff = max(diff, ans);
            }

            j++;
        }

        return diff;
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int ans = s.maxProfit(prices);

    cout << ans << endl;

    return 0;
}