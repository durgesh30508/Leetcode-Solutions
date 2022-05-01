// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
        int dp[n+10][k+10];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=k;j++)
            dp[i][j] = 0;
        }
        for(int flr=1;flr<=k;flr++){
            dp[1][flr] = flr;
        }
        for(int egg=2;egg<=n;egg++){
            for(int flr=1;flr<=k;flr++){
                if(egg>flr){
                    dp[egg][flr] = dp[egg-1][flr];
                    continue;
                }
                int val = INT_MAX;
                for(int i=1;i<=flr;i++){
                    int var;
                    var = 1 + max(dp[egg-1][i-1],dp[egg][(flr-i)]);
                    val = min(val,var);
                }
                dp[egg][flr] = val;
            }
        }

        return dp[n][k];
    }
};
