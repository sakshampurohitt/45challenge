
class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];

        // Phase 1: Find the intersection point
        while (true) {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];

            if (tortoise == hare)
                break;
        }

        // Phase 2: Find the entrance to the cycle (duplicate element)
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return tortoise;
    }
};
