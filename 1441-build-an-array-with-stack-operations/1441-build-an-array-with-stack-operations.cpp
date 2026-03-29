class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j = 0; // pointer for target
        
        for(int i = 1; i <= n; i++){
            ans.push_back("Push");
            
            if(i == target[j]){
                j++; // keep it
            } else {
                ans.push_back("Pop"); // remove unwanted number
            }
            
            if(j == target.size()) break; // target completed
        }
        
        return ans;
    }
};