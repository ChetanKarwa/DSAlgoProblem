// Links : https://leetcode.com/problems/xor-queries-of-a-subarray/

/*
Given the array arr of positive integers and the array queries where queries[i] = [Li, Ri],
for each query i compute the XOR of elements from Li to Ri (that is, arr[Li] xor arr[Li+1] xor ... xor arr[Ri] ).
Return an array containing the result for the given queries.
*/

vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    vector<int> fin;
    for(int i = 1;i<arr.size();i++)
        arr[i]^=arr[i-1];
    for(int i = 0;i<queries.size();i++)
    {
        if(queries[i][0]==0)
            fin.push_back(arr[queries[i][1]]);
        else
            fin.push_back(arr[queries[i][0]-1]^arr[queries[i][1]]);
    }
    return fin;
}
