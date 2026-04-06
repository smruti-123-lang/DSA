class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> hash;
        int mini = INT_MAX;
        vector<string> ans;   // added result vector

        for(int i = 0; i < list1.size(); i++){
            hash[list1[i]] = i;
        }

        for(int i = 0; i < list2.size(); i++){
            if(hash.find(list2[i]) != hash.end()){
                int value = hash[list2[i]] + i;   // fixed (.second removed, + instead of -)

                if(value < mini){
                    mini = value;
                    ans.clear();                 // clear previous results
                    ans.push_back(list2[i]);
                }
                else if(value == mini){
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;   // fixed return
    }
};