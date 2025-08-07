class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int row=triangle.size();
        int sum=0;

        // for(int i=0;i<row;i++)
        // {
        //     int first=triangle[i][0];
        //     for(int j=0;j<triangle[i].size();j++)
        //     {
        //         if(triangle[i][j]<first)
        //         first=triangle[i][j];
        //     }
        //     sum+=first; 
        // }



        // if(row==1) return triangle[0][0];
        // int l=0;
        // int right=row-1;
        // int pre=0,end=0;
        // while(l<right)
        // {
        //     int first=0,second=0;
        //     for(int i=0;i<triangle[l].size();i++)
        //     {
        //         if(pre==0 || pre<=i<=pre+1)
        //         {
        //             if(triangle[l][i]<first || first==0){
        //             first=triangle[l][i];
        //             pre=i;
        //             }
        //         }
        //     }

        //     for(int j=0;j<triangle[right].size();j++)
        //     {
        //         if(end==0 ||end<=j<=end+1)
        //         {
        //             if(triangle[right][j]<second || second==0)
        //             {
        //                 second=triangle[right][j];
        //                 end=j;
        //             }
        //         }
        //     }
        //     sum+=first;
        //     sum+=second;
        //     l++; --right;

        //     if(l==right)
        //     {
        //         int third=0;
        //         for(int k=0;k<triangle[l].size();k++)
        //         {
        //             if(pre<=k<=pre+1 && end<=k<=end+1)
        //             {
        //                 if(third==0 || triangle[l][k]<third)
        //                 {
        //                     third=triangle[l][k];
        //                 }
        //             }
        //         }
        //         sum+=third;
        //     }
            
        // }
        // return sum;


    
       for(int i=row-2;i>=0;--i)
       {
          for(int j=0;j<triangle[i].size();j++)
          {
            triangle[i][j] +=min(triangle[i+1][j],triangle[i+1][j+1]);
          }
       }
      return triangle[0][0];
    }
};