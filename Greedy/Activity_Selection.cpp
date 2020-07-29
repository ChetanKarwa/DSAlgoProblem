/*
Link : https://practice.geeksforgeeks.org/problems/activity-selection/0#:~:text=Given%20N%20activities%20with%20their,of%20two%20activities%20may%20coincide.

Given N activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Note : The start time and end time of two activities may coincide.
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
		vector<pair<int,int>> vec(N);
		for (int i = 0; i < N; i++)
		{
			cin >> vec[i].second;
		}
		for (int i = 0; i < N; i++)
		{
			cin >> vec[i].first;
		}
		sort(vec.begin(), vec.end());
		int count = 1;
		int lasttime = vec[0].first;
		for (int i = 1; i < N; i++)
		{
			if (vec[i].second >= lasttime)
				lasttime = vec[i].first,count++;
		}
		cout <<count<< endl;
	}

	return 0;
}