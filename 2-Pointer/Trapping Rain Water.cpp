/*
Link : https://leetcode.com/problems/trapping-rain-water/

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
*/

class Solution {
public:
    int trap(vector<int>& A) {
        int left=0; int right=A.size()-1;
        int res=0;
        int maxleft=0;
        while(left<=right){
            if(A[left]<=A[right]){
                if(A[left]>=maxleft) maxleft=A[left];
                else res+=maxleft-A[left];
                left++;
            }
            else{
                if(A[right]>=maxleft) maxleft= A[right];
                else res+=maxleft-A[right];
                right--;
            }
        }
        return res;
    }
};
