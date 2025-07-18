class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int mid;
        int high=nums.size();

        if(target>nums[high-1])
        {
            return high;
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};