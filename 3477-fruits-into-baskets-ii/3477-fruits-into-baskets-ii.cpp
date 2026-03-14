class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int count = baskets.size();
        vector<int> used(fruits.size(),0);

        for(int i = 0; i < baskets.size(); i++){

            int j = 0;

            while(j < fruits.size()){

                if(baskets[i] >= fruits[j] && used[j] == 0){
                    used[j] = 1;   // mark fruit as used
                    count--;
                    break;
                }

                j++;
            }
        }

        return count;
    }
};