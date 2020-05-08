class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k,int prev = -1) {
        bool ans = true;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1 and prev != -1){
                if(i-prev<=k){
                    ans = false;
                    break;
                }
                prev = i;
            }
            
            if(nums[i]==1 and prev == -1)
                prev = i;
        }
        return ans;
    }
};
