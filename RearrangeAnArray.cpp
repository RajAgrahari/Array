//https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1
void arrange(long long arr[], int n) 
    {
        for(int i=0;i<n;i++)
        {
            arr[i] = (arr[arr[i]]%n)*n + (arr[i]%n);
        }
        for(int i=0;i<n;i++)
        {
            arr[i] = arr[i]/n;
        }
    }
