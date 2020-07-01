 //Link : https://leetcode.com/problems/rotate-image/

 /*
 You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
Note:
    You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
    DO NOT allocate another 2D matrix and do the rotation.
*/

 void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0;i<n/2;i++)
    {
        swap(matrix[i],matrix[n-1-i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
