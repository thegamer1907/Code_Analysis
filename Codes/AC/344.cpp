#include <bits/stdc++.h>

using namespace std;

const int N=1e5+7;

int a[N];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  int n; cin>>n;
  for(int i=1;i<=n;++i)
  {
    cin>>a[i];
    a[i]+=a[i-1];
  }
  int m; cin>>m;
  while(m--)
  {
    int q; cin>>q;
    int lo=1,hi=n;
    while(lo<=hi)
    {
      int mid=(lo+hi)>>1;
      if(a[mid]<q)
        lo=mid+1;
      else
        hi=mid-1;
    }
    cout<<lo<<endl;
  }                
}
