// NOTE: I know I could use a map, but I chose to do a solution with a helper function instead to get the basics of using helper function.

class Solution {
public:
    int value(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.length()-1; i++) {
            if (value(s[i]) < value(s[i+1])) {
                sum -= value(s[i]);
            } else {
                sum += value(s[i]);
            }
        }
        sum += value(s.back());
        return sum;
    }
};
