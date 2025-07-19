class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        string result="";
        int rem=0;

        while(i>=0 || j>=0 || rem>0)
        {
            int sum=rem;

            if(i>=0)
            {
                sum +=(a[i] -'0');
                i--;
            }
            if(j>=0)
            {
                sum +=(b[j] -'0');
                j--;
            }
           result +=(sum%2)+'0';
           rem=sum/2;
        }
       reverse(result.begin(),result.end());
       return result;
    }
};