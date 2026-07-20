class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size()+1);
        for(int i : nums){
            count[i]++;
        }

        for(const auto e: count){
            freq[e.second].push_back(e.first);
        }
        vector<int> res;
        for(int i = freq.size()-1; i > 0; --i){
            for(int num : freq[i]){
                res.push_back(num);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;

    }
};
