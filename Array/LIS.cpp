class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //Keep track of number of smaller element before current
        vector<int> arr(nums.size());
        for(int i=0;i<arr.size();i++)
            arr[i] = 1;
        int ans = 1;
        for(int i = 1;i < nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    arr[i] = arr[j]+1>arr[i]?arr[j]+1:arr[i];
                    ans = max(ans,arr[i]);
                }
            }
        }
        return ans;
    }
};
//TC O(n*n)
//SC O(n)
