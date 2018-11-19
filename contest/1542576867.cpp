#include <bits/stdc++.h>
using namespace std;
typedef int ll;
ll n,m,k,i,j;
ll a[1000005];


ll f()
{
    ll n=0;
    char c=getchar();
    while(c<48)
        c=getchar();
    while(c>47)
        n=(n<<3)+(n<<1) +c-48,c=getchar();return n;
}
void p(){
	
	n=f();
    k=f();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++){
            a[i]=(a[i]<<1)+f();
        }
    }
	
}
int main()
{
    p();
    sort(a+1,a+n+1);
    m=unique(a+1,a+n+1)-a-1;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            if(!(a[i]&a[j]))return printf("YES"),0;
        }
    }
    return printf("NO"),0;
}
