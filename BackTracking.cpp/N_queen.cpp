/*
Link : https://leetcode.com/problems/n-queens/

The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space respectively.
*/

class Solution {
    
bool issafe(int i,int j,vector<string>& soln,int n)
{
    for(int k = 0;k<i;k++)
    {
        if(soln[k][j]=='Q')
            return false;
    }
    int a = i,b = j;
    while(a>0&&b>0)
    {
        a--;b--;
        if(soln[a][b]=='Q')
            return false;
    }
    while(i>0&&j<n-1)
    {
        i--;j++;
        if(soln[i][j]=='Q')
            return false;
    }
    return true;
}
void NQueen(int n,int i,vector<vector<string>>& ans, vector<string>& soln)
{
    if(i>=n)
    {
        ans.push_back(soln);
    }
    else
    {
        for(int j = 0;j<n;j++)
        {
            if(issafe(i,j,soln,n))
            {
                string a(n,'.');
                a[j] = 'Q';
                soln.push_back(a);
                NQueen(n,i+1,ans,soln);
                soln.pop_back();
            }
        }
    }
}
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector< vector<string> > ans;
        vector<string> soln;
        NQueen(n,0,ans,soln);
        return ans;
    }
};