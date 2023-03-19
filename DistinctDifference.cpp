//https://practice.geeksforgeeks.org/problems/c670bf260ea9dce6c5910dedc165aa403f6e951d/1
vector<int> getDistinctDifference(int N, vector<int> &A) {
        int left = 1;
        int right = N-2;
        int leftDistincts[N]={0};
        int rightDistincts[N]={0};
        unordered_map<int,int> leftSet;
        unordered_map<int,int> rightSet;
        
        while(left < N && right >= 0) {
            
            leftSet[A[left-1]]++;
            rightSet[A[right+1]]++;
            
            leftDistincts[left] = leftSet.size();
            rightDistincts[right] = rightSet.size();
            
            left++;
            right--;
        }
        
        vector<int> ans;
        for(int i = 0; i < N; i++) {
            ans.push_back(leftDistincts[i] - rightDistincts[i]);
        }
        
        return ans;
    }
