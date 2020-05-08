class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r = mat.size(),c = mat[0].size();
        vector<int> temp;
        vector<vector<int>> vp(r,vector<int>(c,0));
        for(int i=0;i<c;i++){
            int a = 0,b = i;
            while(a<r and b<c){
                temp.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(temp.begin(),temp.end());
            a = 0,b = i;
            for(int j = 0; j<temp.size();j++){
                vp[a][b] = temp[j];
                a++;
                b++;
            }
            temp.clear();    
        }
        for(int i=1;i<r;i++){
            int a = i,b = 0;
            while(a<r and b<c){
                temp.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(temp.begin(),temp.end());
            a = i,b = 0;
            for(int j = 0; j<temp.size();j++){
                vp[a][b] = temp[j];
                a++;
                b++;
            }
            temp.clear();
        }
        return vp;
    }
};
//Explanation
//Store element in an temporary array diagonally sort them and store it in result matrix diagonally
//perform this function for every diagonal
