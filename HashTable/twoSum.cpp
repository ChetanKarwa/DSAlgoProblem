// Links : https://leetcode.com/problems/two-sum/submissions/

/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/


vector<int> twoSum(vector<int>& nums, int target) {
   vector<int> temp;
    unordered_map<int,int> m;
    for(int i = 0;i<nums.size();i++)
   {
       if(m[nums[i]]!=0)
       {
           temp.push_back(m[nums[i]]-1);
           temp.push_back(i);
       }
       else
       {
           m[target-nums[i]] = i+1;
       }
   }
    return temp;
}
