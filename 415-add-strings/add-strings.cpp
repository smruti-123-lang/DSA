class Solution {
public:
    string addStrings(string num1, string num2) {
        int size;
        int sum;
        int carry = 0;
        string ans = "";

        if(num1.size() > num2.size()){
            size = num1.size();
        }
        else{
            size = num2.size();
        }

        int i = num1.size() - 1;
        int j = num2.size() - 1;

        for(int k = 0; k < size; k++){
            sum = carry;

            if(i >= 0){
                sum += num1[i] - '0';
                i--;
            }

            if(j >= 0){
                sum += num2[j] - '0';
                j--;
            }

            carry = sum / 10;
            ans.push_back((sum % 10) + '0');
        }

        if(carry){
            ans.push_back(carry + '0');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
