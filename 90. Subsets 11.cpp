class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        vector<int>temp;
        backtrack(v,temp,nums,0);
        return v;
    }
    void backtrack(vector<vector<int>>&v,vector<int>&temp,vector<int>& nums,int st)
    {
        v.push_back(temp);

        for(int i=st;i<nums.size();i++)
        {
            if(i>st && nums[i]==nums[i-1])
            continue;

            temp.push_back(nums[i]);
            backtrack(v,temp,nums,i+1);
            temp.pop_back();
        }
    }
};