//Link : https://leetcode.com/problems/powx-n/

/*
Implement pow(x, n), which calculates x raised to the power n (xn).
implement in O(log n)
*/

double myPow(double x, long long int n) {
    if(x==1)
        return 1;
    double ans = 1;
    if(n<0)
    {
        n = -n;
        x = 1/x;
    }
    while(n>0)
    {
        if(n&1)
            ans*=x;
        n>>=1;
        x*=x;
    }
    return ans;
}
