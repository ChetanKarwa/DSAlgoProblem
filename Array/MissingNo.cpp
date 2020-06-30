// Link : https://leetcode.com/problems/missing-number/

//Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.


//////////////////////////////////////SOLN////////////////////////////////////


////the XOR approach////
int missingNumber(vector<int>& nums) {
    int t = 0;
    for(int i = 1;i<=nums.size();i++)
    {
        t= t^i^nums[i-1];
    }
    return t;
}

////the Add-Sub approach////

int missingNumber(vector<int>& nums) {
    int t = 0;
    for(int i = 1;i<=nums.size();i++)
    {
        t+=(i-nums[i-1]);
    }
    return t;
}
