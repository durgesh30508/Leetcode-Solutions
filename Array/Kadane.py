class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_so_far = -inf
        curr = 0
        for num in nums:
            curr+=num
            max_so_far = max(max_so_far,curr)
            if curr<0:
                curr = 0
        return max_so_far
