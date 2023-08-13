class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """

        k = k % len(nums) # must do this to handle when k > nums length

        queue = deque()

        for x in nums[len(nums)-k:]:
            queue.append(x)
        
        for x in nums [:len(nums)-k]:
            queue.append(x)
        
        for i in range(0, len(nums)):
            nums[i] = queue.popleft()
