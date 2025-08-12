class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int l=nums.size();
       
        for(int i=0;i<l;i++)
        {
             int count=0;
            for(int j=0;j<l;j++)
            {
                if(nums[i]==nums[j])
                {
                    count ++;
                }
            }
            if(count==1)
            {
                return nums[i];
            }
        }
        return 0;
    }
};