//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
         int count = 0;
        int left = 0;
        long long product = 1;
        
        for (int right = 0; right < n; right++) {
            product *= a[right];
            
            while (left <= right && product >= k) {
                product /= a[left];
                left++;
            }
            
           
            count += right - left + 1;
        }
        
        return count;
    }
