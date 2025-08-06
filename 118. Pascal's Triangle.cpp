class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        
        for(int i=0;i<numRows;i++)
        {
            vector<int>curr(i+1,1);
            for(int j=1;j<i;j++)
            {
                curr[j]=v[i-1][j-1]+v[i-1][j];
            }
            v.push_back(curr);
        }
        return v;
        
    }
};