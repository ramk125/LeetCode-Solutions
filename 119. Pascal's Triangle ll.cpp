class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v;
        
        for(int i=0;i<=rowIndex;i++)
        {
            vector<int>curr(i+1,1);
            for(int j=0;j<=i;j++)
            {
                if(i==0 && i==1) break;
                if(j>0 && j<i)
                curr[j]=v[j-1]+v[j];
            }
            v=curr;
        }
        return v;
    }
};