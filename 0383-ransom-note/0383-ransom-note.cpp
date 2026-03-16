class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hash;

        for(int i = 0; i < magazine.size(); i++){
            hash[magazine[i]]++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            if(hash[ransomNote[i]] == 0){
                return false;
            }
            hash[ransomNote[i]]--;
        }

        return true;
    }
};