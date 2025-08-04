class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target > nums.back()) return nums.size();
        
        
        for (int i = 0; i < nums.size(); i++) {
            if (target > nums.back()) {
                return i+1;
            }
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums.at(i)) return i;

            if (target < nums.at(i)) {
                return i;
            }

        }
        return -1;

        }
    };
