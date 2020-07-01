//Link : https://leetcode.com/problems/pascals-triangle/submissions/

//Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.

vector<vector<int>> generate(int N) {
        vector<vector<int>> ans(N);
        if(N<1)
            return ans;
        ans[0].push_back(1);
        for(int i = 1;i<N;i++)
        {
            ans[i].push_back(1);
            for(int j = 1;j<i;j++)
                ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            ans[i].push_back(1);
        }
        return ans;
    }
