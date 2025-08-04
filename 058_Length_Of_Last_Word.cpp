class Solution {
public:
    int lengthOfLastWord(string s) {
        bool foundEndOfLastWord = false;
        int length = 0;
        for (int i = s.length() - 1; i > -1; i--) {
            if (s[i] != ' ') {
                foundEndOfLastWord = true;
            }
            if (foundEndOfLastWord) {
                if (s[i] == ' ') return length;
                length++;
            }            
        }
        return length;
    }
};
