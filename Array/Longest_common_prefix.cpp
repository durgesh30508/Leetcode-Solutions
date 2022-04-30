class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        bool repeat = true;
       for(int i=0;i<strs[0].length();i++){
           for(int j=1;j<strs.size();j++){
               if(i>= strs[j].length() or strs[0][i] != strs[j][i]){
                   repeat = false;
                   break;
               }
           }
           if(!repeat){
               break;
           }
           ans.push_back(strs[0][i]);
       }
        return ans;
    }
};
