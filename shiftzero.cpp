#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;

        for (int k = 0; k < n; k++) {
            if (nums[k] != 0) {
                nums[j] = nums[k];
                j++;
            }
        }

        for (int k = j; k < n; k++) {
            nums[k] = 0;
        }
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    s.moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}