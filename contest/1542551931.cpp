#include <cstdarg>
#include <cmath>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
typedef long long num;
inline void get(num& v) {
    bool f = false; char ch = getchar(); v = 0;
    while(ch < '0') f = (ch == '-'), ch = getchar();
    while(ch >= '0') v = v * 10 + ch - '0', ch = getchar();
    if(f) v = -v;
}
template <typename T>
void print(T t) { cout << t << "\n"; }
template<typename T, typename... Args>
void print(T t, Args... args) { cout << t << " "; print(args...); }
#define _for(i,s,e) for(i=(s);i<(e);i++)
#define _fok(i,s,e,k) for(i=(s);i<(e);i+=k)
#define _0 first
#define _1 second
#define _(a,b) make_pair(a,b)
/////////////////////////////////////////
// gi gi gi gi gi gi gi gi gi gi gi gi //
/////////////////////////////////////////
const int SZ = 1e2 + 10;
num n, i, j;
string pass;
string buf[SZ];
int main() {
    #ifdef GIGI
        freopen("in", "r", stdin);
        #define debug print
    #else
        #define debug
    #endif
    cin >> pass;
    get(n);
    _for(i,0,n) cin >> buf[i];
    _for(i,0,n)
        _for(j,0,n)
            if((buf[i] + buf[j]).find(pass) != string::npos) { print("YES"); return 0; }
    print("NO");
    return 0;
    
}
