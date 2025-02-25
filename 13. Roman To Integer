class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int i;
        for(i=0;i<s.length();i++){
        if (s[i] == 'I') sum += 1;
            if (s[i] == 'V') sum += 5;
            if (s[i] == 'X') sum += 10;
            if (s[i] == 'L') sum += 50;
            if (s[i] == 'C') sum += 100;
            if (s[i] == 'D') sum += 500;
            if (s[i] == 'M') sum += 1000;

        if (i > 0) {
                if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I') sum -= 2;
                if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X') sum -= 20;
                if ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C') sum -= 200;
            }
        }
        return sum;
    }
    
};
