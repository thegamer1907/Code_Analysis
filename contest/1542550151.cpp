#include<bits/stdc++.h>
using namespace std;
char a,b,x,y;
int main()
{int n,i,ok=1,ok2=1,ans=0;
ios_base::sync_with_stdio(false);
cin>>a>>b>>n;
for(i=1;i<=n;++i)
     {cin>>x>>y;
    if(x==a&&y==b)
         ans=2;
    if(y==a&&ok)
        ++ans,ok=0;
    if(x==b&&ok2)
        ++ans,ok2=0;}
puts(ans>1?"YES":"NO");
return 0;
}