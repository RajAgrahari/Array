//https://practice.geeksforgeeks.org/problems/35bff0ee40090b092e97b02f649085bf1390cc67/1
long long findNumber(long long n)
    {
        if(n==0)
        return 0;
        n -= 1;

        return 10*(findNumber(n/5))+2*(n%5)+1;
    }
