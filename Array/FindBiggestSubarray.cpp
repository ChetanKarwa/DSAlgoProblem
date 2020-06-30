//Link - https://leetcode.com/problems/maximum-subarray/

// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

//If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.


// Kadane's Algo
int maxSubArray(vector<int>& A) {
        int sum = 0,maxx = A[0];
        for(int i=0;i<A.size();i++){
            sum+=A[i];
            if(maxx<sum)
                maxx = sum;
            if(sum<0)
                sum = 0;
        }
        return maxx;
    }

//
