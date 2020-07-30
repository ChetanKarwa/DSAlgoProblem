/*
https://leetcode.com/problems/combination-sum/

Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
*/

class Solution
{
  void find(int j, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &soln, int target)
  {
    if (target == 0)
    {
      ans.push_back(soln);
    }
    else if (target > 0)
    {
      for (int i = j; i < candidates.size(); i++)
      {
        if (candidates[i] <= target)
        {
          soln.push_back(candidates[i]);
          find(i, candidates, ans, soln, target - candidates[i]);
          soln.pop_back();
        }
      }
    }
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target)
  {
    vector<vector<int>> ans;
    vector<int> soln;
    find(0, candidates, ans, soln, target);
    return ans;
  }
};