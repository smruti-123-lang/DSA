class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> count;

        for(string s: strs){
            string key = s;
            sort(key.begin(),key.end());
            count[key].push_back(s);//wrt their key they get allocated
        }

        vector<vector<string>> ans;
        for(auto x : count){
            ans.push_back(x.second);
        }

      
        return ans;
    }
};