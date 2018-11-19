#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

main()
{
 int n,ok1=0,ok2=0;
 string s,c;
 cin>>s>>n;
 for(int i=0;i<n;i++)
 {cin>>c;
 if(c[0]==s[1])
    ok1=1;
 if(c[1]==s[0])
    ok2=1;
    if(c[0]==s[0]&&c[1]==s[1])
    ok1=ok2=1;
 }
 cout<<(ok1&&ok2?"YES":"NO");
}