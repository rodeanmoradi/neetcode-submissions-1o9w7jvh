class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++) {
            if (nums.size() == 0) {
                return false;
            }
            else if (nums[i] == nums[i + 1]) {
                return true;
            }
        }

        return false;
    }
};