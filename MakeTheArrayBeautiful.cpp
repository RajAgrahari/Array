//https://practice.geeksforgeeks.org/problems/badefd58bace4f2ca25267ccfe0c9dc844415e90/1
vector<int> makeBeautiful(vector<int> arr) 
    {
         stack<int> st;
         int n = arr.size();
         for(int i=0;i<n;i++)
         {
             if(arr[i]==0)
             arr[i]=INT_MAX;
             while(!st.empty() && i<n && ((long long)st.top()*(long long)arr[i])<0)
             {
                 st.pop();
                 i++;
                 if(i<n && arr[i]==0)
                 arr[i]=INT_MAX;
             }
             if(i<n)
             st.push(arr[i]);
         }
         vector<int> ans;
         while(!st.empty())
         {
             if(st.top()==INT_MAX)
             ans.push_back(0);
             else
             ans.push_back(st.top());
             st.pop();
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
