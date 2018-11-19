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

const ldbl E = 2.71828182845904523536;
const ldbl pi = acos(-1);
const dbl eps = 1e-9;
const ll mod = 1e9+7;
const ll inf = 1LL<<30;

/** /////////// ** Code ** /////////// **/

const int N=100100;
int MASK , k;
int msk[N];
bool ok=0;

void f(int i,int ans){
    if(i == k){
        if(MASK & ans) return ;

        if(ans == MASK) {if(msk[ans] > 1) ok=1;}
        else if(msk[ans]) ok=1;

        return ;
    }

    f(i+1,ans);
    f(i+1,ans|(1<<i));


}

int main()
{
    int n; scanf("%d%d",&n,&k);
    for(int i=0 ; i<n ; i++){
        int mask=0;
        for(int j=0 ; j<k ; j++){
            int x; scanf("%d",&x);
            if(x) mask|=(1<<j);
        }

        if(mask == 0) ok=1;
        msk[mask]++;
    }


    if(ok){
        printf("YES");
        return 0;
    }

    for(int mask=0 ; mask<(1<<k) ; mask++){
        if(!msk[mask]) continue;
        MASK=mask;
        f(0,0);

        if(ok){
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}
