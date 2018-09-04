#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <climits>
#include <cstring>
#include <ctype.h>
#include <sstream>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <vector>

using namespace std;

typedef long long in;
typedef pair<in,in> pii;
typedef vector<in> vi;

#define FOR(i,a,b) for (in i=a;i<b;i++)


in n, m, k;
in binSearch(in D[], in mana){
    in l = 0LL, r = k-1, curr, ans = -1LL;
    while (l<=r){
        curr = (l+r)>>1;
        if (D[curr]<=mana){
            l = curr+1;
            ans = curr;
        } else {
            r = curr-1;
        }
    }
    return ans;
}
int main(){
    scanf("%lld %lld %lld",&n,&m,&k);
    in x, s;
    scanf("%lld %lld",&x,&s);
    in a[m+3], b[m+3];
    FOR(i,0,m) scanf("%lld",&a[i]);
    FOR(i,0,m) scanf("%lld",&b[i]);
    in c[k+3],d[k+3];
    FOR(i,0,k) scanf("%lld",&c[i]);
    FOR(i,0,k) scanf("%lld",&d[i]);

    in mnTime = x*n;
    in u = binSearch(d,s);
    mnTime = min(mnTime, 1LL*x*(n-(u!=-1 ? c[u] : 0)));
    FOR(i,0,m){
        if (s<b[i]) continue;
        u = binSearch(d,s-b[i]);
        mnTime = min(mnTime, 1LL*a[i]*(n-(u!=-1 ? c[u] : 0)));
    }
    cout<<mnTime<<endl;
    return 0;
}