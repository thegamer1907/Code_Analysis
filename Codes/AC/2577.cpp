#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%I64d",&x)
#define scs(x) scanf("%s",x)
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
const int MAX=10000005;
int f[MAX];
int prime[MAX];
void pre(){
    for(int i=2;i<MAX;i++){
        if(prime[i]==0){
            for(int j=i;j<=MAX;j+=i){
                prime[j]=i;
            }
        }
    }
    return;
}
int main(){
    pre();
    int n;
    sc(n);
    int x;
    for(int i=0;i<n;i++){
        sc(x);
        int prev=0,p;
        while(x!=1){
            p=prime[x];
            if(p!=prev)
                f[p]++;
            prev=p;
            x=x/p;
        }
    }
    for(int i=3;i<MAX;i++){
        f[i]=f[i]+f[i-1];
    }
    int m,l,r,a,b;
    sc(m);
    while(m--){
        sc(l);
        sc(r);
        a=f[min(l-1,MAX-1)];
        b=f[min(r,MAX-1)];
        printf("%d\n",b-a);
    }
    return 0;
}
