#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> v[N];
bool vis[N];


int main()
{ int n,m,i,t=0,f=0,k=0;
 cin>>n>>m;

  int a[n];
  for(i=1;i<=n-1;i++)
  cin>>a[i];

    t=1+a[1];
  for(i=1;i<=n-1;i++)
    { if(t==i)
        t=i+a[i];
        
        if(t==m)
        f=1;

    }


if(f>0)
cout<<"YES";
else
cout<<"NO";


return 0;
}
