class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
        }
        if(sum%2==1)
            return false;
        sum = sum / 2;
        int r = nums.size();
        vector<vector<int>> dp(r+1,vector<int>(sum+1,0));
        for(int i=1;i<=nums.size();i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j){
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-nums[i-1]]+nums[i-1]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[r][sum] == sum;
    }
};
