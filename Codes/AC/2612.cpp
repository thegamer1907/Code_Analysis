/**
*
* Author: MARC
* Lang: GNU C++14
*
**/

#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ii pair < int , int >
#define LS pair < ll , string >

typedef unsigned long long ull;
typedef long double ldbl;
typedef long long ll;
typedef double dbl;

const ldbl pi = 3.1415926535897932385;
const ldbl E = 2.71828182845904523536;
const dbl eps = 1e-9;
const ll mod = 1e9+7;
const ll inf = 1<<30;

/** /////////// ** Code ** /////////// **/

const int MX=1e7+7;
bool prime[MX];
int ans[MX] , frq[MX];

void seive(){

for(int i=2;i<MX;i++)prime[i]=1;
prime[0]=prime[1]=0;

for(int i=2;i*i<MX;i++)
    if( prime[i] )
        for(int j=i*i;j<MX;j+=i)
            prime[j]=0;

}

int main()
{
    seive();
    int n; scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int x; scanf("%d",&x);
        frq[x]++;
    }

    for(int i=0 ; i<MX ; i++){
        if(prime[i]){
            int res=0 , id=i;
            while(id < MX){
                if(frq[id])res+=frq[id];
                id+=i;
            }
            ans[i]=res;
        }
    }
    for(int i=1 ; i<MX ; i++) ans[i]=ans[i]+ans[i-1];
    int m; scanf("%d",&m);
    for(int i=0 ; i<m ; i++){
        int l,r; scanf("%d%d",&l,&r);
        if(l > MX) l=MX-2;
        if(r > MX) r=MX-2;
        printf("%d\n",ans[r]-ans[l-1]);
    }

    return 0;
}
