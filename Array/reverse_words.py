void reverseWords(string &s) {
    reverse(s.begin(), s.end());
    int storeIndex = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
          #Add a space in front of every word if its not a first word
            if (storeIndex != 0) s[storeIndex++] = ' ';
          #store current index
          int j = i;
          #store the word continuosly
            while (j < s.size() && s[j] != ' ') { s[storeIndex++] = s[j++]; }
          #now word starts from idex i and ends at index j,or storeindex reverse the word
            reverse(s.begin() + storeIndex - (j - i), s.begin() + storeIndex);
          #move i to next word
            i = j;
        }
    }
  #remove remaining spaces at the end
    s.erase(s.begin() + storeIndex, s.end());
}
#Reverse whole string and then reverse each word 
