class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> nums_map;

        for(int i = 0; i < nums.size(); i++) {
            nums_map[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (nums_map.contains(diff)) {
                int j = nums_map[diff];
                if (i != j) {
                    vector<int> indices = {i, j};
                    return indices;
                }
            }
        }
    }
};
