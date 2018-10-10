#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <queue>
#include <utility>
#include <set>

using namespace std;

#define ll long long
#define pi 3.141592653589793
#define pb push_back
#define forto(l,a,b) for(long long l = a; l <= b; ++l)
#define downto(l,a,b) for(long long l = a; l >= b; --l)
#define Fred_Flinstone ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ln '\n'

bool vis[10000001] = {};
long cnt[10000001] = {};
long ans[10000001] = {};

void build(){
    forto(f, 2, 10000000){
        if (!vis[f]){
            for(long ff = f; ff <= 10000000; ff += f){
                ans[f] += cnt[ff];
                vis[ff] = 1;
            }
        }
    }
}

void sums(){
    forto(f, 2, 10000000){
        ans[f] += ans[f -1];
    }
}

int main()
{
    Fred_Flinstone;
    long n, m;
    cin >> n;
    forto(f, 1, n){
        long x;
        cin >> x;
        cnt[x] ++;
    }
    cin >> m;
    build();
    sums();
    forto(f, 1, m){
        long l, r;
        cin >> l >> r;
        if (l > 10000000){
            l = 10000000;
        }
        if (r > 10000000){
            r = 10000000;
        }
        cout << ans[r] - ans[l-1] << ln;
    }
    return 0;
}