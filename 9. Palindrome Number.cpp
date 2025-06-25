class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int d=0;
        long long int curr=x;
        while(x>0)
        {
            int a=x%10;
            d=d*10+a;
            x=x/10;
        }
    
        return d==curr;
    }
};