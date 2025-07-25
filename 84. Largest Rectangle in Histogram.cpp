class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        int maxArea = 0;
//First method
        // for (int i = 0; i < n; i++) {
        //     int height = heights[i];
        //     int left = i, right = i;

        //     while (left > 0 && heights[left - 1] >= height) {
        //         left--;
        //     }

        //     while (right < n - 1 && heights[right + 1] >= height) {
        //         right++;
        //     }

        //     int width = right - left + 1;
        //     int area = height * width;

        //     if (area > maxArea) {
        //         maxArea = area;
        //     }
        // }



//Second Method
        // if(n==1) return heights[0];
        // for(int i=0;i<n-1;i++)
        // {
        //     int sum=0;
        //     if(heights[i]>heights[i+1])
        //     {
        //         sum=heights[i+1]+heights[i+1];
        //         if(heights[i]>sum) sum=heights[i];
        //     }
            
        //     else{
        //         sum=heights[i]+heights[i];
        //         if(heights[i+1]>sum) sum=heights[i+1];
        //     }
        //     if(maxArea<sum) maxArea=sum;
        // }





//Third method
       stack<int>st;
       for(int i=0;i<=n;i++)
       {
        while(!st.empty() && (i==n || heights[i]<heights[st.top()]))
        {
            int height=heights[st.top()];
            st.pop();
            int width;
            if(st.empty()) width=i; 
            else width=i-st.top()-1;

            maxArea=max(maxArea,height*width);
        }
        st.push(i);
       }

        return maxArea;
    }
};