#pragma mark - headers
// *--------
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <cassert>
#include <ctime>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

#pragma mark - about us

#define DEVELOPER "HIK"

#pragma mark - abbreviations

typedef long long int ll;
typedef long double ld;

#pragma mark - HIK functions

#define ABS(x) ( (x) > 0 ? (x):(-(x)))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define HIK_MODULE 1e9+7;
#define rep(i,n) for(ll i = 0;i<n;i++)
void HIK_FILEOPEN(string fileTxt){
    string inp = fileTxt + ".in",outp = fileTxt + ".out";
    freopen(inp.c_str(),"r",stdin);
    freopen(outp.c_str(),"w", stdout);
}
ll HIK_POW(ll x,ll pow){
    ll res = 1;
    for (ll i = 0; i<pow; i++)res *= x;
    return res;
}
ll HIK_MOD(ll number,ll module){ if (number < 0)return HIK_MOD(number+module,module);return number%module; }


int main(){
    
    ll n;
    cin >> n;
    cout << n/2 << endl;
    for (ll i = 1; i<n/2; i++) {
        cout << 2 << " ";
    }
    if (n%2)cout << 3;
    else cout << 2;
    return 0;
}



