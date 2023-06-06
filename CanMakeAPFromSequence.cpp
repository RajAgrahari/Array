//https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/
bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]!=d)
            return false;
        }
        return true;
    }
