/*
List : https://leetcode.com/problems/3sum/

Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

*/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
            return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer;
        for(int i = 0;i<nums.size()-2;i++)
        {
            if(i!=0&&nums[i]==nums[i-1])
                continue;
            int target = -nums[i];
            int j = i+1;
            int k = nums.size()-1;
            while(j<k)
            {
                if(j!=i+1&&nums[j]==nums[j-1])
                {j++;continue;}
                if(k!=nums.size()-1&&nums[k]==nums[k+1])
                {k--;continue;}
                if(nums[j]+nums[k] == target)
                {answer.push_back({nums[i],nums[j],nums[k]});j++;k--;}
                else if(nums[j]+nums[k]>target)
                    k--;
                else
                    j++;
            }
        }
        return answer;
    }
};