class Solution {
public:
    int search(vector<int>& nums, int target) { 
        int start = 0;
        int end = nums.size() - 1;
        // Loop until end is less than start (when this happens, target is not in nums)
        while(end >= start) {
            if(nums[(start + end) / 2] == target) {
                return (start + end) / 2;
            }
            else if(target > nums[(start + end) / 2]) {
                start = (start + end) / 2 + 1;
            }
            else {
                end = (start + end) / 2 - 1;
            }
            
        }

        return -1;
    }
};
