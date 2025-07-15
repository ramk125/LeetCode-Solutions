class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0],large=nums[0];
        for(int i=1;i<n;i++)
        {
           sum=max(nums[i],sum+nums[i]);
           large=max(large,sum);
        }




        // int GlobalMaximumSum=INT_MIN;
        // int ElementSum=0;
        // for(int ele:nums)
        // {
        //     ElementSum=ElementSum+ele;
        //     GlobalMaximumSum=max(GlobalMaximumSum,ElementSum);
        //     if(ElemenSum<0)
        //     {
        //         ElementSum=0;
        //     }
        // }
        // return GlobalMaximumSum;
        return large;
    }
};