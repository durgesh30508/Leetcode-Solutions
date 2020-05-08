class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck,int val = 0) {
        deque<int> q;
        
        sort(deck.begin(),deck.end());
        q.push_back(deck[deck.size()-1]);
    
        for(int i=deck.size()-2;i>=0;i--){
            
            val = q.back();
            q.pop_back();
            q.push_front(val);
            q.push_front(deck[i]);
            
        }
        
        vector<int> res (q.begin(),q.end());
        
        return res;
    }
};

//Explanations
//Just simulate the reverse process using deque
