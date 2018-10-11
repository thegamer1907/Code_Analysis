#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;
typedef pair<double,int > dpi;
typedef long long ll;
typedef unsigned long long ull;
#define sc(a) scanf("%d",&a)
#define scd(a) scanf("%lf" , &a)
#define pb push_back
const int MAX = 1e5+55;
const int inf = 1e9+77;
const int MOD = 1e9+7;
const double PI = 3.14159265359;
const double eps = 0.0000001;

int n, t;
int x[MAX];
int cs[MAX];

bool check(int d) {
    if(cs[d-1] <= t) return 1;
    for(int i = d ; i < n ; ++i) {
        if(cs[i] - cs[i-d] <= t)
            return 1;
    }
    return 0;
}

int main() {

    sc(n);
    sc(t);

    for(int i = 0 ; i < n ; ++i) sc(x[i]);

    cs[0] = x[0];
    for(int i = 1; i < n ; i++)
        cs[i] = cs[i-1] + x[i];

    int st = 0, en = n , res = 0 ;

    while(st <= en) {
        int md = (st+en)>>1;
        if(check(md)) {
            st = md + 1;
            res = md;
        }
        else {
            en = md - 1;
        }
    }

    cout<<res;

return 0 ;}