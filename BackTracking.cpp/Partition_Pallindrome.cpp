/*
Link : https://leetcode.com/problems/palindrome-partitioning/

Given a string s, partition s such that every substring of the partition is a palindrome.

Return all possible palindrome partitioning of s.
*/

class Solution
{
public:
  vector<vector<string>> partition(string s)
  {
    vector<vector<string>> ans;
    if (s.empty())
      return ans;

    vector<string> path;
    make(0, s, path, ans);

    return ans;
  }

  void make(int index, string &s, vector<string> &path, vector<vector<string>> &ans)
  {
    if (index == s.size())
    {
      ans.push_back(path);
      return;
    }
    for (int i = index; i < s.size(); ++i)
    {
      if (isPalindrome(s, index, i))
      {
        path.push_back(s.substr(index, i - index + 1));
        make(i + 1, s, path, ans);
        path.pop_back();
      }
    }
  }

  bool isPalindrome(const string &s, int start, int end)
  {
    while (start <= end)
    {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }
};