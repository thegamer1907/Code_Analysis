#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  vector<int> a(n),b(n);
  cin>>a[0];
  b[0]=a[0];
  for(int i=1; i<n; i++){
  cin>>a[i];
  b[i]=b[i-1]+a[i];
  }
  sort(a.begin(),a.end());
  int m,x;
  cin>>m;
  for(int i=0; i<m; i++)
  {
    cin>>x;
    vector<int>::iterator ans=lower_bound(b.begin(),b.end(),x);
    cout<<ans-b.begin()+1<<endl;
  }
  return 0;
}
