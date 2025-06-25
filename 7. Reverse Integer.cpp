class Solution {
public:
    int reverse(int x) {
        //  int a=0,b=0,c=0;
        // while(x != 0)
        // {
        //     a=x%10;

        //     if(b>INT_MAX/10 || b<INT_MIN/10)
        //     {
        //         return 0;
        //     }
        //     b=b*10+a;
        //     x=x/10;

        // }
        // return b;
        long long number, ans=0;
        number=x;
        while(number)
        {
            ans=(ans*10)+(number%10);
            number=number/10;
        }
        if(ans<(-(pow(2,31))) || ans>(pow(2,31)-1))
        {
            return 0;
        }

        return ans;
    }
};