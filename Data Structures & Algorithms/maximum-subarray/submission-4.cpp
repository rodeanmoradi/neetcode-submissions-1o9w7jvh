class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's Algorithm
        int max_sum = nums[0];
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(sum < 0) {
                sum = nums[i];
            }
            else {
                sum += nums[i];
            }
            if(sum > max_sum) {
                max_sum = sum;
            }
        }

        return max_sum;
    }
};
