#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;  cin>>n>>m;
  int arr[n];
  int maxx=-1;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    maxx=max(maxx,arr[i]);
  }
  int ans=maxx;
  long sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=maxx-arr[i];
  }
  if(m<=sum)
  {
    cout<<maxx<<" "<<maxx+m;
    return 0;
  }
  ans+=m;
  m-=sum;
  int a,b;
  a=m/n;
  b=m%n;
  maxx+=a;
  if(b!=0)
    maxx++;
  cout<<maxx<<" "<<ans;
}
