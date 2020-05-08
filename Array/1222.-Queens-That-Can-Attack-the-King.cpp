class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& q, vector<int>& k) {
        map<pair<int,int> ,bool> mp;
        vector<vector<int>> res;
        long long len = q.size(); 
        for(int i=0;i<len;i++){
            mp[{q[i][0],q[i][1]}] = true;
        }
        long long a=k[0],b=k[1];
        vector<int> ar;
        for(int i=a-1;i>=0;i--){
            if(mp[{i,b}]){
                ar.push_back(i);
                ar.push_back(b);
                res.push_back(ar);
                ar.clear();
                break;
            }
        }
         for(int i=a+1;i<=7;i++){
            if(mp[{i,b}]){
                ar.push_back(i);
                ar.push_back(b);
                res.push_back(ar);
                ar.clear();
                break;
            }
        }
         for(int i=b-1;i>=0;i--){
            if(mp[{a,i}]){
                ar.push_back(a);
                ar.push_back(i);
                res.push_back(ar);
                
                ar.clear();
                break;
            }
        }
         for(int i=b+1;i<=7;i++){
            if(mp[{a,i}]){
                ar.push_back(a);
                ar.push_back(i);
                res.push_back(ar);
                ar.clear();
                break;
            }
        }
        for(int i=a-1,j=b-1;i>=0&&j>=0;i--,j--){
             if(mp[{i,j}]){
                ar.push_back(i);
                ar.push_back(j);
                res.push_back(ar);
                ar.clear();
                 break;
            }
            
        }
          for(int i=a+1,j=b+1;i<=7&&j<=7;i++,j++){
             if(mp[{i,j}]){
                ar.push_back(i);
                ar.push_back(j);
                res.push_back(ar);
                ar.clear();
                 break;
            }
            
        }
          for(int i=a-1,j=b+1;i>=0&&j<=7;i--,j++){
             if(mp[{i,j}]){
                ar.push_back(i);
                ar.push_back(j);
                res.push_back(ar);
                ar.clear();
                 break;
            }
            
        }
          for(int i=a+1,j=b-1;i<=7&&j>=0;i++,j--){
             if(mp[{i,j}]){
                ar.push_back(i);
                ar.push_back(j);
                res.push_back(ar);
                ar.clear();
                 break;
            }
            
        }
        return res;
    }
};

//Explanation
//Check in all 8 directions and store coordinate of first queen which occur in these directions.
