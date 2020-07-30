/*
Link : https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

Consider a rat placed at (0, 0) in a square matrix of order N*N. It has to reach the destination at (n-1, n-1). 
Find all possible paths that the rat can take to reach from source to destination. 
The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). 
Value 0 at a cell in the matrix represents that it is blocked and cannot be crossed while value 1 at a cell in the matrix represents that it can be travelled through.
*/



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string a = "DRUL";
int x[4] = {0,1,0,-1};
int y[4] = {1,0,-1,0};
int n;

bool poss(int i,int j, int r, vector<vector<int>>& arr)
{
    if(arr[i+y[r]][j+x[r]]!=0)
        return true;
    return false;
}
void ratinmaze(int i,int j,vector<string>& ans,vector<vector<int>>& arr,string& soln){
    if(i==n&&j==n)
        ans.push_back(soln);
    else
    {
        for(int r=0;r<4;r++)
        {
            if(poss(i,j,r,arr))
            {
                arr[i][j] = 0;
                soln+=a[r];
                ratinmaze(i+y[r],j+x[r],ans,arr,soln);
                arr[i][j] = 1;
                soln.pop_back();
            }
        }
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<vector<int> > arr(n+2,vector<int> (n+2,0));
        for(int i=1;i<=n;i++)
        {
            for(int j = 1;j<=n;j++)
            {
                cin>>arr[i][j];
            }
        }
        vector<string> ans;
        string soln;
        ratinmaze(1,1,ans,arr,soln);
        if(ans.size())
        {

        for(auto it : ans){
            cout<<it<<" ";
        }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
}
