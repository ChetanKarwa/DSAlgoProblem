//Link : https://leetcode.com/problems/set-matrix-zeroes/

// Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

/*
Follow up:
A straight forward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?
*/


void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        bool col = 0 , row  = 0;
        for(int i = 0;i<n;i++)
        {
            if(matrix[i][0] == 0)
            {
                col = 1;
                break;
            }
        }
        for(int j = 0;j<m;j++)
        {
            if(matrix[0][j] == 0)
            {
                row = 1;
                break;
            }
        }
        for(int i = 1;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1;i<n;i++)
        {
            if(matrix[i][0] == 0)
            {
                for(int j = 1;j<m;j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j = 1;j<m;j++)
        {
            if(matrix[0][j] == 0)
            {
                for(int i = 1;i<n;i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if(row)
        {
            for(int j = 0;j<m;j++)
                {
                    matrix[0][j] = 0;
                }
        }
        if(col)
        {
            for(int i = 0;i<n;i++)
                {
                    matrix[i][0] = 0;
                }
        }
    }
