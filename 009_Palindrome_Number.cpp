// Follow up: Solving without converting the integer to a string.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int temp = x;
        int count = 0;
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }

        int* my_array = new int[count];

        for (int i = 0; i < count; i++) { // Put each last number in the arr
            my_array[i] = x % 10;
            x = x / 10;
        }

        for (int i = 0; i < count; i++) {
            if (my_array[i] != my_array[count-1-i]){
                return false;
            }
        }

        return true;
    }
};
