//Link : https://leetcode.com/problems/unique-paths/

/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach
the bottom-right corner of the grid (marked 'Finish' in the diagram below).
How many possible unique paths are there?
*/


int uniquePaths(double m, double n) {
    double ans = 1;
    if(m>n)
    {
        m = m+n;
        n = m-n;
        m = m-n;
    }
    for(double i = 1;i<m;i++)
    {
        ans=ans*((i+n-1)/(i));
    }
    return (ans+0.5);
}
