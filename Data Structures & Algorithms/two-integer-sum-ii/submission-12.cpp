class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::unordered_map<int, int> numbers_map;
        for (int i = 0; int num : numbers) {
            int diff = target - num;
            if (diff > num) {
                numbers_map[num] = i;
            }
            else if (diff == num && num == numbers[i+1]) {
                vector<int> indices = {i + 1, i + 2};
                return indices; 
            }
            else if (numbers_map.contains(diff)) {
                vector<int> indices = {numbers_map[diff] + 1, i + 1};
                return indices;
            }
        i++;
        }
    }
};
