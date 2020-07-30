/*
Link : https://leetcode.com/problems/permutations/\

Given a collection of distinct integers, return all possible permutations.
*/

class Solution
{
  void permutation(vector<int> &nums, vector<int> &traverse, vector<vector<int>> &ans, vector<int> &soln)
  {
    if (soln.size() == nums.size())
    {
      ans.push_back(soln);
    }
    else
    {
      for (int j = 0; j < nums.size(); j++)
      {
        if (!traverse[j])
        {
          traverse[j] = 1;
          soln.push_back(nums[j]);
          permutation(nums, traverse, ans, soln);
          soln.pop_back();
          traverse[j] = 0;
        }
      }
    }
  }

public:
  vector<vector<int>> permute(vector<int> &nums)
  {
    vector<int> traverse(nums.size(), 0);
    vector<vector<int>> ans;
    vector<int> soln;
    permutation(nums, traverse, ans, soln);
    return ans;
  }
};