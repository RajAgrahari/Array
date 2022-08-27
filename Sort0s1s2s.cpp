  //two pointer approach  
    void swap(int arr[],int a,int b)
    {
        int temp = arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
    
    void sort012(int a[], int n)
    {
        int l=0,mid=0,h=n-1;
        while(mid<=h)
        {
            if(a[mid]==0)
            {
                swap(a,l,mid);
                l++;
                mid++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else if(a[mid]==2)
            {
                swap(a,mid,h);
                h--;
            }
        }
    }