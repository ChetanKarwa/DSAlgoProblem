/*
Link : https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room/0

There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i] is finish time of meeting i.

What is the maximum number of meetings that can be accommodated in the meeting room?

*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	for (cin >> t; t--;)
	{
		int N;
		cin >> N;
		vector<vector<int>> vec(N,vector<int> (3));
		for (int i = 0; i < N; i++)
		{
			cin >> vec[i][1];
			vec[i][2] = i;
		}
		for (int i = 0; i < N; i++)
		{
			cin >> vec[i][0];
		}
		sort(vec.begin(), vec.end());
		int count = 1;
		int lasttime = vec[0][0];
		cout<<vec[0][2]+1<<" ";
		for (int i = 1; i < N; i++)
		{
			if (vec[i][1] >= lasttime)
				count++,lasttime = vec[i][0],cout<<vec[i][2]+1<<" ";
		}
		cout << endl;
	}

	return 0;
}