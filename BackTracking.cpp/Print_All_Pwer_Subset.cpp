/*
Link : https://leetcode.com/problems/subsets-ii/

 Given a collection of integers that might contain duplicates, nums, return all possible subsets (the power set).
 Note: The solution set must not contain duplicate subsets.
 
*/

class Solution {
public:
     void create(vector<vector<int>>& ans,vector<int>soln,vector<int> nums,int start)
    {
        ans.push_back(soln);
        for (int i=start;i<nums.size();i++)
        {
            if(i!=start && nums[i]==nums[i-1])
            continue;
                soln.push_back(nums[i]);
                create(ans,soln,nums,i+1);
                soln.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> soln;
        sort(nums.begin(),nums.end());
        create(ans,soln,nums,0);
        return ans;
    }
};