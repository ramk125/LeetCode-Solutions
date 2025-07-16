class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int row=matrix.size();
        int col=matrix[0].size();
        int totalsize=row*col;
        int count=0;

        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;
        
        while(count<totalsize)
        {
            for(int i=startcol;i<=endcol && count<totalsize;i++)
             {
                v.push_back(matrix[startrow][i]);
                count++;
             }
             ++startrow;
            
            for(int i=startrow;i<=endrow && count<totalsize;i++)
            {
                v.push_back(matrix[i][endcol]);
                count++;
            }
            --endcol;

            for(int i=endcol;i>=startcol && count<totalsize;--i)
            {
                v.push_back(matrix[endrow][i]);
                count++;
            }
            --endrow;

            for(int i=endrow;i>=startrow && count<totalsize;--i)
            {
                v.push_back(matrix[i][startcol]);
                count++;
            }
            ++startcol;    
        }
        return v;
    }
};