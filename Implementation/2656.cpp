#include<bits/stdc++.h>
using namespace std;
inline long long in()  {long long x=0;int n=1;char c=getchar();while(!isdigit(c)){n=(c=='-')?-1:1;c=getchar();}while(isdigit(c)){x=x*10+c-'0';c=getchar();}return x*n;}
#define FOR(i,a,b) for(int i=a;i<=b;i++)
long long n;
main()
{
    n=in();
    if(n%2==0) cout<<n/2;
    else cout<<n/2-n;
}
