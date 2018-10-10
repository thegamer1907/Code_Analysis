#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long mt;

#define rep(a, b, i) for(mt i = a; i < b; ++i)
#define repe(a, b, i) for(mt i = a; i <= b; ++i)
#define repd(a, b, i) for(mt i = a; i > b; --i)
#define repde(a, b, i) for(mt i = a; i >= b; --i)

#define INF 2000100100ll
#define N 210
#define K 6

mt n;
mt get_count(mt x) {
    mt m = n, answ = 0;
    while(m) {
        mt d =  min(x, m);
        m -= d, m -= m / 10, answ += d;
    }
    return answ;
}

mt bs() {
    mt l = 0, r = 1e18;
    while(r - l > 1) {
        mt md = l + r >> 1;
        if(get_count(md) * 2 >= n) r = md;
        else l = md;
    }
    return r;
}

int main() {
    scanf("%lld", &n);
    printf("%lld", bs());
    
    return 0;
}

