class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int s1=1;
        int s2=1;
        int curr=0;
        for(int i=n-2;i>=0;i--){
            curr=s1+s2;
            s1=s2;
            s2=curr;
        }
        return curr;
    }
};