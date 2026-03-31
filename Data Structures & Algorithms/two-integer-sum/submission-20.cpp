class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // loop through array
       // create hash map as you go
       // diff = target - nums[i]
       // search for diff, ensuring its not at the same index 
        std::unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(map.count(diff) == 0) {
                map[nums[i]] = i;
                
                continue;
            }
            else {
                int j = map[diff];
                vector<int> ans;
                ans.push_back(j);
                ans.push_back(i);

                return ans;
            }
        }  
    }
};
