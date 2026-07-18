class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string str: strs){
            string sorteds = str;
            sort(sorteds.begin(), sorteds.end());
            mp[sorteds].push_back(str);
        }
        vector<vector<string>> ana;
        for(auto vec: mp){
            ana.push_back(vec.second);
        }
        return ana;

    }
};
