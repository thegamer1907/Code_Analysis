#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef int i;
ll n,ans,p1,p2,sum,k;
ll a[111000];
int main()
{
    cin>>n>>k;
  for(int i=0;i<n;i++)
      cin>>a[i];
    p1=0;p2=0;
    sum=0;
  while(p2<n)
  {
      if(sum+a[p2]<=k)
      {
         sum+=a[p2];
          p2++;

      }
      else{
        sum-=a[p1];
        p1++;

      }
      ans=max(ans,p2-p1);
  //  cout<<p1<<" "<<p2<<" "<<sum<<" "<<ans<<endl;
  }
  cout<<ans;
}
