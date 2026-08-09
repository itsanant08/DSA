#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1, 2, 3, 4};

    vector<int> ans = s.runningSum(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}