//https://practice.geeksforgeeks.org/problems/6bb49b563cc171335c6564b00307a6d867e0268d/1
bool is_possible_to_get_seats(int n, int m, vector<int>& seats)
    {
        int cnt=0;
        
        //from start to first 1;
        int i=0;
        while(i<m && seats[i]!=1)
        {
            i++;
        }
        int start = i;
        if(start==m)
        return ((m+1)/2)>=n;
        cnt += (i/2);
        
        //from last to first 1;
        i = m-1;
        while(i>=0 && seats[i]!=1)
        {
            i--;
        }
        int end = i;
        cnt += ((m-1)-i)/2;
        
        //from first 1 from left to last one in the array 
        while(start<end)
        {
            int j = start+1;
            while(j<=end && seats[j]!=1)
            j++;
            if(j!=(start+1))
            cnt += (j-start-2)/2;
            start = j;
        }
        // cout<<cnt<<' ';
        if(cnt>=n)
        return true;
        return false;
        
    }
