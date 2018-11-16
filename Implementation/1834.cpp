/*
         testing  coding  speed
*/
#include <bits/stdc++.h>

#define rep(i,a,n)  for(int i=a;i<n;++i)
#define rip(i,a,n)  for(int i=a;i<=n;++i)
#define mrep(i,a,n)  for(int i=a;i<n;--i)
#define  MAX  10000

typedef long long ll;
using namespace std;

int main()
{
    //freopen("a.in", "r", stdin);
    int t,x,y,z,sumx=0,sumy=0,sumz=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 and sumy==0 and sumz==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
