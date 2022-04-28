class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        idx0,idx1,idx2 = -1,-1,-1
        for i in range(len(nums)):
            if(nums[i] == 0):
                idx2+=1
                nums[idx2] = 2
                idx1+=1
                nums[idx1] = 1
                idx0+=1
                nums[idx0] = 0
                
            elif(nums[i] == 1):
                idx2+=1
                nums[idx2] = 2
                idx1+=1
                nums[idx1] = 1
                
            elif(nums[i] == 2):
                idx2+=1
                nums[idx2] = 2
