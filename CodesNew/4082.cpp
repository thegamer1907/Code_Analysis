#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mi 1e18

using namespace std;

int cmp(int x,int y){return x>y;}
long long a[200007],b[200007],p[200007],n,q,s;

int main()
{_
 cin>>n>>q;
 for(int i=1;i<=n;i++)
 {
   cin>>a[i];
   p[i]=p[i-1]+a[i];
 }
/*
 for(int i=1;i<=n;i++)
  cout<<p[i]<<' ';
 cout<<endl;
*/
 for(int i=1;i<=q;i++)
 {
  cin>>b[i];
  s+=b[i];
  //cout<<distance(p+1,upper_bound(p+1,p+n+1,s))<<':';
  if(distance(p+1,upper_bound(p+1,p+n+1,s))==n) {cout<<n<<endl;s=0;} else
   cout<<n-distance(p+1,upper_bound(p+1,p+n+1,s))<<endl;
 }
}
