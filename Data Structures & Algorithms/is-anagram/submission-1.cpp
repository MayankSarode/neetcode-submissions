class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> c(26, 0);
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            c[s[i]-'a']++;
            c[t[i]-'a']--;
        }
        for(int oi: c){
            if(oi!=0){
                return false;
            }
        }
        return true;
        
    }
};
