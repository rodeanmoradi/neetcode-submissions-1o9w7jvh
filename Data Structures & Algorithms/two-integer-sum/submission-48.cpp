class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> nums_map;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (nums_map.contains(diff)) {
                vector<int> indices = {i, nums_map[diff]};
                std::sort(indices.begin(), indices.end());
                return indices;
            }
            nums_map[nums[i]] = i;
        }
    }
};
