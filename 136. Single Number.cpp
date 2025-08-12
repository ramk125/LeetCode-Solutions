class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;)
        {
            int right=i+1;
            if(right<=n-1 && nums[i]==nums[right])
            {
                i=i+2;
            } 
            else
            {
                val=nums[i];
                i++;
            }
        }
        return val;


        // int number=0,n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     number=number^nums[i];
        // }
        // return number;

    }
};