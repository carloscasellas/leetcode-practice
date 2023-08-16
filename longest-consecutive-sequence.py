class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = list(set(nums))

        if len(nums) == 1:
            return 1
        

        nums.sort()

        left = 0
        right = 0
        maxSeq = 0

        while right < len(nums) - 1:

            right += 1

            if nums[right - 1] != nums[right] - 1:
                left = right

            if(right - left + 1 > maxSeq):
                maxSeq = right - left + 1
        
        return maxSeq