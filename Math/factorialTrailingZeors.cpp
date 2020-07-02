// Link :
/*
Given an integer n, return the number of trailing zeroes in n!
*/
int trailingZeroes(int n) {
    int ans = 0;
    while(n>0)
    {
        n/=5;
        ans+=n;
    }
    return ans;
}
