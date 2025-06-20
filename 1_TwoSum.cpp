class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>v;

        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if((nums[i]+nums[j])==target)
        //         {
        //             v.push_back(i);
        //             v.push_back(j);
        //         }
        //     }
        // }
        // return v;

        vector<pair<int,int>>elements;
        for(int i=0;i<nums.size();i++)
        {
            elements.push_back({nums[i],i});
        }
        sort(elements.begin(),elements.end());
        int left=0;
        int right=elements.size()-1;
        while(left<right)
        {
            int sum=elements[left].first+elements[right].first;
            if(sum==target)
                   return {elements[left].second,elements[right].second};
            else if(sum<target)
                ++left;

            else
                --right;
        }
        return {};
    }
};