class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int maxl=0,curr=0;
        if(nums.size() !=0)
        {
            maxl=1;
            curr=1;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
               curr++;
            }
            else{
                maxl=max(maxl,curr);
                curr=1;
            }
        }
        return max(curr,maxl);
    }
};