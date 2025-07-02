class Solution {
public:
    bool isValid(string s) {

    char stack[10000];
    int top=-1;
    int n=s.length();

    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            stack[++top]=ch;
        }
        else if(ch==')' || ch=='}' || ch==']')
        {
            if(top==-1) return false;
            char topChar = stack[top--];
            if(
                (ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '['))
                {
                    return false;
                }
        }
    }
    return top == -1;
    }
};