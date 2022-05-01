class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //similar to max subarray
        int ans = nums[0];
        int curr_max = nums[0];
        int curr_min = nums[0];
        cout<<curr_max<<" "<<curr_min<<endl;
        for(int i=1;i<nums.size();i++){
            //when a negative numver comes swap the min with max as neg will make min to max and max to min.
            if(nums[i]<0){
                swap(curr_max,curr_min);
            }
            cout<<curr_max<<" "<<curr_min<<endl;
            curr_max = max(nums[i],curr_max*nums[i]);
            curr_min = min(nums[i],curr_min*nums[i]);
            ans = max(ans,curr_max);
        }
        return ans;
    }
};
