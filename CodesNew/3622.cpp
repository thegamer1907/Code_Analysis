#include<bits/stdc++.h>
using namespace std;
#define L long long int
const int M=1e5+10;
int n,m,sum,mx;
int cl(int x,int y)
{
  if(x%y==0)
    return x/y;
  return (x/y)+1;
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
    {
      int x;
      cin>>x;
      mx=max(mx,x);
      sum+=x;
    }
  cout<<max(cl(sum+m,n),mx)<<" "<<mx+m<<endl;
  return 0;
}
