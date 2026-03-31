class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // loop until found a number less than target
       // find the difference between target and that number
       // check if difference is the other number
        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            auto it = std::find(std::begin(nums), std::end(nums), diff);
            if(it == std::end(nums)) {
                continue;
            }
            int j = it - std::begin(nums);
            if(nums[i] + nums[j] == target && i != j) {
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
            else {
                // search for j but start after i
                // get index
                auto it = std::find(std::begin(nums) + (i + 1), std::end(nums), diff);
                if(it == std::end(nums)) {
                    continue;
                }
                int j = it - std::begin(nums);
                if(nums[i] + nums[j] == target) {
                    vector<int> ans;
                    ans.push_back(i);
                    ans.push_back(j);

                return ans;
                }
            }
        }
    }
};
