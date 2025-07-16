class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length()-1;
        int count =0;

        while (l >= 0 && s[l] == ' ') {
        l--;  
        }

         while (l >= 0 && s[l] != ' ') {
            count++;
            l--;
        }
        return count;
    }
};