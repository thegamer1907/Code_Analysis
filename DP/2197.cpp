#include<bits/stdc++.h>
using namespace std;

#define F(i,a,b) for(int i =a; i<b; i++)
#define rF(i,a,b) for(int i=a-1; i>=b;i--)


int main()
{
  ios_base::sync_with_stdio(false);

  int n,m;
  cin>>n>>m;
  vector<int> a;
  vector<int> l;
  F(i,0,n)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }
  F(i,0,m)
  {
    int y;
    cin>>y;
    l.push_back(y);
  }
  int dp[n];
  int count;
  set<int> s;


  rF(i,n,0)
  {
    s.insert(a[i]);
    dp[i] = s.size();
  }
  F(i,0,m)
  {
    cout<<dp[l[i]-1]<<endl;
  }
























    return 0;
}
