#include <bits/stdc++.h>
using namespace std;

/*for leetcode only */

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1)
                sum += nums[i];
            else
                break;
        }

        unordered_set<int> s(nums.begin(), nums.end());

        while (s.count(sum))
            sum++;

        return sum;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 2, 5};

    cout << obj.missingInteger(nums);

    return 0;
}


/*class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1)
                sum += nums[i];
            else
                break;
        }

        while (find(nums.begin(), nums.end(), sum) != nums.end())
            sum++;

        return sum;
    }
};*/