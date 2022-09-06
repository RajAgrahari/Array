#include<bits/stdc++.h>
using namespace std;
// Time Complexity: O(N^2)
int MaxAreaRec(int arr[],int n)
{
    int area;
    int M = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int left=i,right=i;
       while(left>=0 && arr[left]>=arr[i])
           left--;
       while(right<n && arr[right]>=arr[i])
           right++;
        
        area=(right-left-1)*arr[i];
        M=max(M,area);
    }
    return M; 
}
// Time Complexity: O(N) using stack
int largestRectangleArea(vector<int>& nums) {
        stack<int> st;
        st.push(-1);
        nums.push_back(0);
        int ans=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && st.top()!=-1 && nums[i]<nums[st.top()]){
                    int h=nums[st.top()];
                    st.pop();
                    ans=max(ans,h*(i-st.top()-1));
            }
            st.push(i);
        }
        return ans;
    }


int main()
{
    int arr[] = {4,2,1,5,6,3,2,4,2};
    cout<<MaxAreaRec(arr,9);
    return 0;
}