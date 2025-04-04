class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        for(char c : s){
            m[c - 'a']++;
        }

        for(int i=0;i<s.size();i++){
            if(m[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};
