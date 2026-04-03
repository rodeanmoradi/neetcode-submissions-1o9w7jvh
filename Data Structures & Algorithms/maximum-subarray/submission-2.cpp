class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute force solution
        int largest_sum = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for(int j = i; j < nums.size(); j++) {
               sum += nums[j];
               if(sum > largest_sum) {
                largest_sum = sum;
               }
            }
        }
        
        return largest_sum;
    }
};
