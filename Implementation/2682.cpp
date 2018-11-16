#include<bits/stdc++.h>
using namespace std;
inline long long in()  {long long x=0;int n=1;char c=getchar();while(!isdigit(c)){n=(c=='-')?-1:1;c=getchar();}while(isdigit(c)){x=x*10+c-'0';c=getchar();}return x*n;}
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int n,a[105];
main()
{
    n=in();
    FOR(i,1,n) a[in()]=i;
    FOR(i,1,n) cout<<a[i]<<" ";
}
