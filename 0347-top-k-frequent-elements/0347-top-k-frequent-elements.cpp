class Solution {
public:

    bool static compare(pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> count;

        for(int i : nums){
            count[i]++;
        }

        vector<pair<int,int>> vec(count.begin(), count.end());

        sort(vec.begin(), vec.end(), compare);

        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};