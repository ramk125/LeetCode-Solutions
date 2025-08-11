class Solution {
public:
    int candy(vector<int>& ratings) {
        // int n=ratings.size();
        // int cnt=0;
        // int curr=ratings[0];
        // int pre=0;
        // for(int i=1;i<n;i++)
        // {
        //     if(ratings[i]<ratings[curr])
        //     {
        //         cnt +=2;
        //         pre=curr;
        //         curr=ratings[i];
        //         if(i==n-1 && curr>pre)
        //         {
        //            cnt +=2;
        //         }
        //         else if(i==n-1)
        //         {
        //             cnt +=1;
        //         }
        //     }
        //     else{
        //         cnt +=1;
        //         pre=curr;
        //         curr=ratings[i];
        //         if(i==n-1 && curr>pre)
        //         {
        //            cnt +=2;
        //         }
        //         else if(i==n-1)
        //         {
        //             cnt +=2;
        //         }
        //     }
        // }
        // return cnt;


    int n = ratings.size();
    vector<int> candies(n, 1); 

    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = max(candies[i], candies[i + 1] + 1);
        }
    }

    int total = 0;
    for (int c : candies) {
        total += c;
    }

    return total;
    }
};