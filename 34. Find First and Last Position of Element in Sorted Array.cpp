class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1,last=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                 first=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
            last=i;
            break;
            }
        }
        return {first,last};
    }
};

// int n = nums.size();
//         int first = -1, last = -1;

//         for (int i = 0; i < n; i++) {
//             if (nums[i] == target && first == -1) {
//                 first = i;
//             }
//             if (nums[n - 1 - i] == target && last == -1) {
//                 last = n - 1 - i;
//             }
//             // Early exit if both are found
//             if (first != -1 && last != -1) break;
//         }

//         return {first, last};