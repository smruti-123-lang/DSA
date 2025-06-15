class Solution {
public:
int sum = 0;
    int reverse(int x) {
        while(x != 0){
        int digit = x % 10;
        
         if(sum < (INT_MIN/10) || (sum >(INT_MAX / 10)))
            return 0 ;
        sum = (sum *10) + digit;
        x = x / 10;
        }
        return sum;
    }
};