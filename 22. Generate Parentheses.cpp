class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string>v;
         
        backtrack(v,"",0,0,n);
        return v;
    }
        void backtrack(vector<string>&v,string curr,int cnt,int close,int n)
        {
            if(cnt==n && close==n)
            {
                v.push_back(curr);
                return;
            }
            if(cnt<n)
            {
                backtrack(v,curr+"(",cnt+1,close,n);
            }
            if(close<cnt)
            {
                backtrack(v,curr+")",cnt,close+1,n);
            }
        
    }
};