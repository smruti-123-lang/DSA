class Solution {
public:
    int findsum(int num){
        int sum = 0;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int addDigits(int num) {
        while(num >= 10){
            num = findsum(num);
        }
        return num;
    }
};