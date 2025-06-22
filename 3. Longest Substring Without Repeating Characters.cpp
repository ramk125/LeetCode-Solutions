class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // string st="";
        // int cnt=0;
        // for(int i=0;i<s.length();i++)
        // {
        //     bool curr=false;
        //     for(int j=0;j<st.length();j++)
        //     {
        //         if(s[i]==st[j])
        //         {
        //             curr=true;
        //         }
        //     }
        //     if(curr ==false)
        //     {
        //         st +=s[i];
        //         cnt++;
        //     }
        // }
        // return cnt;

        string st = "";
        int maxLen = 0;

        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < st.length(); j++){
                if(s[i] == st[j]){
                    st = st.substr(j + 1); 
                    break;
                }
            }
            st += s[i]; 
            if(st.length()>maxLen){
                maxLen = st.length(); 
            }
        }
        return maxLen;
    }
};3. Longest Substring Without Repeating Characters.cpp