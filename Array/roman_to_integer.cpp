public:
    int romanToInt(string s) {
        int ans = 0;
        map<char,int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        
        for(int i=0;i<s.length()-1;i++){
            if(s[i] == 'I' and (s[i+1] == 'V' or s[i+1] == 'X')){
                ans = ans - 1;
                continue;
            }
            if(s[i] == 'X' and (s[i+1] == 'L' or s[i+1] == 'C')){
                ans = ans - 10;
                continue;
            }
            if(s[i] == 'C' and (s[i+1] == 'D' or s[i+1] == 'M')){
                ans = ans - 100;
                continue;
            }
            ans = ans + mp[s[i]];
            
        }
        ans = ans + mp[s[s.length()-1]];
        return ans;
    }
};
