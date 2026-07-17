class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> ms;
        map<char, int> mt;
        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            ms[s[i]]++;
            mt[t[i]]++;
        }
        for(auto const& [c, count] : ms){
            if(mt[c] != ms[c]){
                return false;
            }
        }
        return true;
    }
};
