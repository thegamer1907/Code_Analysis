#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  int n, t, a[100010], cur[100010];
  //memset(a, 0, sizeof(a));
  cin>>n>>t;
  for (int i = 1; i < n; ++i)
  {
    cin>>a[i];
  }
  cur[1] = 1;
  for (int i = 1; i < n; ++i)
  {
    if(cur[i]){
      cur[i + a[i]] = 1;
    }
  }
  if(cur[t])
    cout<<"YES";
  else
    cout<<"NO";
} 