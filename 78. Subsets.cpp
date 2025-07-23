class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        //method-1
        // vector<vector<int>>v;
        //  //v.push_back(null);
        //  for(int i=0;i<nums.size();i++)
        //  {
        //     v.push_back(nums[i])
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         vector<int>vv;
        //         vv.push_back(nums[i]);
        //         vv.push_back(nums[j]);
        //       v.push_back(vv);
        //     }
        //  }
        //  v.push_back(nums);
        //  return v;


        //method-2
        // vector<vector<int>> res = {{}};
        // for (int num : nums) {
        //     int n = res.size();
        //     for (int i = 0; i < n; ++i) {
        //         vector<int> subset = res[i]; 
        //         subset.push_back(num);       
        //         res.push_back(subset);       
        //     }
        // }


        //method-3
        vector<vector<int>>res;
        vector<int>temp;

        subset(res,temp,nums,0);
        return res;
    }
    void subset(vector<vector<int>>& res,vector<int>& temp,vector<int>& nums,int st)
    {
        res.push_back(temp);

        for(int i=st;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            subset(res,temp,nums,i+1);
            temp.pop_back();
        }
    }
};