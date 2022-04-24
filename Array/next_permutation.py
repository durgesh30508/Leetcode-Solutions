class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        idx1,idx2 = -1 , -1
        for i in range(len(nums)-1,-1,-1):
            if i != len(nums)-1 and nums[i] < nums[i+1]:
                idx1 = i
                break
                
        if idx1 == -1:
            nums.reverse()
            return
                
        for i in range(len(nums)-1,i,-1):
            if nums[i]>nums[idx1]:
                idx2 = i
                break

        nums[idx1] , nums[idx2] = nums[idx2] , nums[idx1]
        nums[idx1+1:] = nums[:idx1:-1]
                
        #TC: O(n)
        #SC: O(1)
        #Traverse from back and find first occurence of arr[i]<arr[i+1] , idx1=i
        # if no such occurence exists then array is in decreasing order so answere will be reverse array
        #again traverse from back and find first element which is grater than arr[idx1], say idx2
        #swap idx1 and idx2 and reverse array after idx1
        
