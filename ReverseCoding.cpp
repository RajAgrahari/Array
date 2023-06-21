//https://practice.geeksforgeeks.org/problems/reverse-coding2452/1
int sumOfNaturals(int n) {
        long long temp = ((long long)n*(n+1));
        temp = temp/2;
        return temp%1000000007;
    }
