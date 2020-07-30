/*
Link : https://leetcode.com/problems/combination-sum-ii/

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

Each number in candidates may only be used once in the combination.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
*/

class Solution
{
public:
  void findCombination(vector<vector<int>> &res, const int order, const int target, vector<int> &local, const vector<int> &num)
  {
    if (target == 0)
    {
      res.push_back(local);
      return;
    }
    else
    {
      for (int i = order; i < num.size(); i++)
      {
        if (num[i] > target)
          return;
        if (i && num[i] == num[i - 1] && i > order)
          continue;
        local.push_back(num[i]),
            findCombination(res, i + 1, target - num[i], local, num);
        local.pop_back();
      }
    }
  }
  vector<vector<int>> combinationSum2(vector<int> &num, int target)
  {
    vector<vector<int>> res;
    sort(num.begin(), num.end());
    vector<int> local;
    findCombination(res, 0, target, local, num);
    return res;
  }
};