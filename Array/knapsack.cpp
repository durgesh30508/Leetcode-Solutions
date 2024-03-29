class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int dp[n+2][W+2];
       for(int i=0;i<n+2;i++){
           for(int j=0;j<W+2;j++){
               dp[i][j] = 0;
           }
       }
       for(int i=1;i<=n;i++){
           for(int j=1;j<=W;j++){
               if(wt[i-1]<=j){
                   dp[i][j] = max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
               }
               else{
                   dp[i][j] = dp[i-1][j];
               }
           }
       }
       return dp[n][W];
    }
};
