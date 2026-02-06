class Solution { 
public:
    bool isCapital(char a) { 
        return (a >= 65 && a <= 90);
    } 

    bool detectCapitalUse(string word) {
        int n = word.length();

        // Case 1: all letters are capital
        bool allCaps = true;
        // Case 2: all letters are lowercase
        bool allSmall = true;

        for (int i = 0; i < n; i++) {
            if (!isCapital(word[i])) allCaps = false;
            if (isCapital(word[i])) allSmall = false;
        }

        // Case 3: first capital, rest lowercase
        bool firstCap = isCapital(word[0]);
        for (int i = 1; i < n; i++) {
            if (isCapital(word[i])) {
                firstCap = false;
                break;
            }
        }

        return allCaps || allSmall || firstCap;
    }
};
