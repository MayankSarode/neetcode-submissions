class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> f;
        for(int i : nums){
            f[i]++;
        }
        vector<pair<int, int>> vec;
        for(auto i: f){
            vec.push_back({i.second, i.first});
        }
        sort(vec.rbegin(), vec.rend());

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
