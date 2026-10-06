class Solution {
public:

    int findPivot(vector<int>& nums, int index, int leftSum, int totalSum)
    {
        if(index == nums.size())
            return -1;

        int rightSum = totalSum - leftSum - nums[index];

        if(leftSum == rightSum)
            return index;

        return findPivot(nums,
                         index + 1,
                         leftSum + nums[index],
                         totalSum);
    }

    int pivotIndex(vector<int>& nums) {

        int totalSum = 0;

        for(int num : nums)
            totalSum += num;

        return findPivot(nums, 0, 0, totalSum);
    }
};