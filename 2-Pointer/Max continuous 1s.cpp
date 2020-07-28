/*
Link : https://leetcode.com/problems/max-consecutive-ones

Given a binary array, find the maximum number of consecutive 1s in this array.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = 0;
        for(int  i = 0;i<nums.size();i++)
        {if(nums[i]==1) count++;
        else ans = max(ans,count),count = 0;
        }
        ans = max(ans,count);
        return ans;
    }
};