#include<bits/stdc++.h>
using namespace std;
#define long long long
inline long in()  {long x=0;int n=1;char c=getchar();while(!isdigit(c)){n=(c=='-')?-1:1;c=getchar();}while(isdigit(c)){x=x*10+c-'0';c=getchar();}return x*n;}
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int n,h,res;
main(){
    n=in(),h=in();
    FOR(_,1,n) res+=(in()<=h)?1:2;
    cout<<res;
}
