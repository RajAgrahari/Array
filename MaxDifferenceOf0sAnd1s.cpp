//https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1
int maxSubstring(string s)
	{
	     int n = s.size();
	     int cnt0 = 0,cnt1=0,l=0;
	     int ans=-1;
	     for(int r=0;r<n;r++)
	     {
	         if(s[r]=='1')
	         cnt1++;
	         else
	         cnt0++;
	         while(l<=r && cnt1>cnt0)
	         {
	             if(s[l]=='1')
	             cnt1--;
	             else
	             cnt0--;
	             l++;
	         }
	         ans = max(ans,cnt0-cnt1);
	     }
	     return ans==0?-1:ans;
	}
