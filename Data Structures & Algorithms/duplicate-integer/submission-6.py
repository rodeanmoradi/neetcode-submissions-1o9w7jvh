class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        sorted = nums.sort()
        for i in range(len(nums)):
            if i == len(nums) - 1:
                break
            if nums[i] == nums[i + 1]:
                return True
        return False
        