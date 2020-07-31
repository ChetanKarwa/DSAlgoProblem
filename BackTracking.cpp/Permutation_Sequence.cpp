/*
Link : https://leetcode.com/problems/permutation-sequence

The set [1,2,3,...,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"

Given n and k, return the kth permutation sequence.
*/

class Solution
{
public:
  string getPermutation(int n, int k)
  {
    set<int> av;
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
      av.insert(i);
      fac *= i;
    }
    string ans;
    fac /= n;
    n--;
    k--;
    while (n > 0)
    {
      int f = (k) / fac;
      k %= fac;
      fac /= n;
      auto itr = av.begin();
      cout << f << endl;
      while (f-- > 0)
      {
        itr++;
      }
      ans.push_back(*itr + '0');
      av.erase(itr);
      n--;
    }
    ans.push_back(*av.begin() + '0');
    return ans;
  }
};