#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();

        // Iterate from RIGHT to LEFT
        for (int i = n - 1; i >= 0; i--) {
            // If the current digit is less than 9, just add 1 and we're done.
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            // Otherwise, the digit is 9. Set it to 0 and continue the loop
            // to handle the carry on the next digit.
            digits[i] = 0;
        }

        // If the loop finishes, it means all digits were 9s (e.g., [9,9,9]).
        // The vector is now all 0s (e.g., [0,0,0]).
        // We need to add a 1 to the front.
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
