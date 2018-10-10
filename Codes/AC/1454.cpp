//What is love?

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <stdio.h>
#include <math.h>

using namespace std;

#define FOR(i,n,m) for(int i=n;i<m;++i)
#define ROF(i,n,m) for(int i=n;i>m;--i)
#define pb push_back
#define ll long long
#define ri(a) scanf("%d",&a)
#define rii(a,b) scanf("%d %d",&a,&b)

const int INF = 0x3f3f3f3f;

//Baby don't hurt me

int a[100001];
ll b[100001];
int n, S;

bool pos(int k){
    FOR(i,0,n) b[i] = a[i] + 1LL*k*(i+1);
    sort(b,b+n);
    ll sum = 0;
    FOR(i,0,k) sum += b[i];
    return sum<=S;
}

int bins(){
    int l=0, r=n;
    while(l<r){
        int k = (l+r+1)/2;
        if(pos(k)) l = k;
        else r = k-1;
    }
    return l;
}

//Don't hurt me

int main(){
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

    rii(n,S);
    FOR(i,0,n) ri(a[i]);
    int k = bins();
    FOR(i,0,n) b[i] = a[i] + 1LL*k*(i+1);
    sort(b,b+n);
    int sum = 0;
    FOR(i,0,k) sum += b[i];
    printf("%d %d\n",k,sum);

    return 0;
}

//No more