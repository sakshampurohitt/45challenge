class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low++], nums[mid++]); // Correct usage of increments
            } else if (nums[mid] == 2) {
                swap(nums[mid], nums[high--]); // Do not increment mid here
            } else {
                mid++;
            }
        }
    }
};
