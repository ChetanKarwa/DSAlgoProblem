/*
Link : https://practice.geeksforgeeks.org/problems/fractional-knapsack/0

Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    double val;
    cin>>val;
    vector<pair<double, double>> k(n);
    double a;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      cin >> k[i].second;
      k[i].first = a / k[i].second;
    }
    sort(k.begin(), k.end());
    double ans = 0;
    while(val>0&&!k.empty())
    {
      ans += min(val,k.back().second)*k.back().first;
      val -= min(val,k.back().second);
      k.pop_back();
    }
    
    cout<<fixed<<setprecision(2)<<ans<<endl;
  }
}