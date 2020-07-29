/*
Link : https://practice.geeksforgeeks.org/problems/minimum-platforms/0#:~:text=Explanation%3A,arrive%20and%20depart%20all%20trains

Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.

Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal to departure of the other. In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival of another.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t = 0;
  cin>>t;
  while(t--)
  {
    int N;
    cin>>N;
    int ari[N];
    int dep[N];
    for(int i = 0;i<N;i++) cin>>ari[i];
    for(int i = 0;i<N;i++) cin>>dep[i];
    sort(ari,ari+N);
    sort(dep,dep+N);
    int i = 0;
    int j = 0;
    int ans = 1, pt = 0;
    while(i<N)
    {
      if(ari[i]>dep[j])
      j++,pt--;
      else
      {
        pt++;i++;
      }
      ans = max(ans,pt);     
    }
    cout<<ans<<endl;
  }
}