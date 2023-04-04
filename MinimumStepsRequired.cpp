//https://practice.geeksforgeeks.org/problems/6a1b365b520f10c8a29b533eb72951b4b4237b57/1
int minSteps(string str) 
{
    int n = str.size();
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(str[i-1]==str[i])
        continue;
        cnt++;
    }
   
    return (cnt/2)+1;
}
