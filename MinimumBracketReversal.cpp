// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
int countRev (string s)
{
    if(s.length()%2!=0) 
    return -1;

    int open=0,close=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{')
        open++;
        else
        {
            if(open==0)
            close++;
            else 
            open--;
        }
    }
    return (close+1)/2 + (open+1)/2; 
}
