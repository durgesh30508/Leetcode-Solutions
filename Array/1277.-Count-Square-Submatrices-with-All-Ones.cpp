class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        int r=m.size(),count=0,c=m[0].size();
        int dp[r+10][c+10];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m[i][j]==0){
                    dp[i][j]=0;
                }
                else if(i==0||j==0){
                    dp[i][j]=m[i][j];
                }
                else{
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                }
                count+=dp[i][j];
            }
        }
        return count;
    }
};
