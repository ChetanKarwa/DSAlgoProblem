/*
Link : https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins/0

Given a value N, total sum you have. You have to make change for Rs. N, and there is infinite supply of each of the denominations in Indian currency, i.e., you have infinite supply of { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000} valued coins/notes, Find the minimum number of coins and/or notes needed to make the change for Rs N.

*/

#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int arr[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
  while (t--)
  {
    int n;
    cin >> n;
    int i = 0;
    while (n != 0)
    {
      while (arr[i] > n)
        i++;
      cout << arr[i] << " ";
      n -= arr[i];
    }
    cout << endl;
  }
}