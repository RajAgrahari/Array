//https://practice.geeksforgeeks.org/problems/3a93b6a25a7b88e4c80a1fee00898fd8022eb108/1
int arrayOperations(int n, vector<int> &arr) 
    {
        int cnt=0;
        int i=0;
        bool f=false;
        while(i<n)
        {
            if(arr[i]==0)
            {
                f=true;
                break;
            }
            i++;
        }
        if(f==false)
        return -1;
        
        i=0;
        while(i<n)
        {
            
            while(i<n && arr[i]==0)
            i++;
            
            if(i==n)
            break;
            
            while(i<n && arr[i]!=0)
            i++;
            cnt++;
            i++;
        }
        return cnt;
    }
