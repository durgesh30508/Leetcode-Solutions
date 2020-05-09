class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
       vector<int> res;
        for(int i=A.size();i>0;i--){
            for(int j=0;j<A.size();j++){
                if(A[j]==i){
                    res.push_back(j+1);
                    reverse(A.begin(),A.begin()+j+1);
                }
            }
            res.push_back(i);
            reverse(A.begin(),A.begin()+i);
        }
        return res;
    }
};
//Explanation
//Place element from larger to smaller to place element x to its corrent position 
//find the position y of x in array reverse first y after that it placed at a[0]
//now reverse x element so that it get placed at a[x-1].
