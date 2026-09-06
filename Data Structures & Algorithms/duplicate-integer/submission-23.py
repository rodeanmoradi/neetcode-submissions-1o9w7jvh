class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        if len(nums) == 0:
            return False
        for i, _ in enumerate(nums):
            if i + 1 == len(nums):
                return False
            if nums[i] == nums[i+1]:
                return True
        