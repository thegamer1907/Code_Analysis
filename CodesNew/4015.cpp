#include <cstdio>
#include <iostream>
#include <algorithm>
#define ll long long
#define f(i,a,b) for(register int i=a;i<=b;i++)
using namespace std;

inline ll rd() {
    ll x=0,fla=1; char c=' ';
    while(c>'9'|| c<'0') {if(c=='-') fla=-fla; c=getchar();}
    while(c<='9' && c>='0') x=x*10+c-'0',c=getchar();
    return x*fla;
}

inline void out(ll x){
    int a[25],wei=0;
    if(x<0) putchar('-'),x=-x;
    for(;x;x/=10) a[++wei]=x%10;
    if(wei==0){ puts("0"); return;}
    for(int j=wei;j>=1;--j) putchar('0'+a[j]);
    putchar('\n');
}

const int MAX=2000100;
int n,q;
ll a[MAX],k[MAX];

int main() {
    n=rd(),q=rd();
    f(i,1,n) a[i]=rd()+a[i-1];
    ll sum=0,l=1,r=n,last=0;
    f(i,1,q) {
        ll k=rd();
        if(k >= a[n]-sum) {
            out(n);
            sum=0,l=1,r=n,last=0;
            continue;
        }
        while(l<r) {
            int mid=(l+r)>>1;
            if(a[mid]-sum >= k) r=mid;
            else l=mid+1;
        }
        sum+=k;r=n;
        last=a[l]-sum;
        // cout<<l<<" "<<r<<" "<<sum<<" "<<last<<" "<<las<<" ";
        out(last==0?n-l:n-l+1);
        if(!last) l++;
    }
    return 0;
}
