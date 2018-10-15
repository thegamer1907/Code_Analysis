#include "bits/stdc++.h"
using namespace std;

#define FOR(i,a,b) for(int i = a; i < b; i++)
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
const int N = 1e5 + 5;
int d[N], n;
int a[N], m;
int vis[N];
bool check(int limit){

    memset(vis, -1, sizeof vis);

    for(int i = limit-1; i >= 0; --i){
        if(vis[d[i]] == -1)
            vis[d[i]] = i;

    }

    FOR(i,1,m+1)if(vis[i] == -1)return false;

    ll daysNeededToStudy = 0;

    for(int i = limit-1; i >= 0; i--){

        if(d[i] && vis[d[i]] == i){
            daysNeededToStudy += a[d[i] - 1];
        }   else {
            if(daysNeededToStudy)daysNeededToStudy--;
        }

    }
    return daysNeededToStudy == 0;

}
int main(){

    scanf("%d%d", &n, &m);

    FOR(i,0,n)scanf("%d", d + i);
    FOR(i,0,m)scanf("%d", a + i);

    int lo  = 1, hi = n + 1;
    while(lo < hi){
        int md = lo + (hi - lo) / 2;
        if(check(md))hi=md;
        else lo = md + 1;
    }
    if(lo == n + 1) lo  = -1;
    cout << lo << '\n';
    return 0;
}
