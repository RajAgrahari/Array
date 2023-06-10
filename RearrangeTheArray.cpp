//https://practice.geeksforgeeks.org/problems/arranging-the-array1131/1
void Rearrange(int arr[], int n)
        {
            vector<int>pos,neg;
            for(int i=0;i<n;i++){
                if(arr[i]>=0)
                pos.push_back(arr[i]);
                else
                neg.push_back(arr[i]);
            }
            for(int i=0;i<neg.size();i++)
            arr[i]=neg[i];
            int ne=neg.size();
            for(int i=0;i<pos.size();i++){
                arr[ne++]=pos[i];
            }
        }
