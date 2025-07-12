class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        // int a=nums[0];
        // bool b=true;
        // for(int i=0;i<nums.size();i++)
        // {
        //    if(nums[i]==1)
        //    {
        //     b=false;
        //    }
        //    else{
        //     a++;
        //    }
        // }
        // if(b)
        // {
        //     return 1;
        // }
        // else{
        //     return a;
        // }
    int small=1;
    for(int num:nums)
    {
        if(num==small)
        {
            small++;
        }
    }
    return small;
    }
};