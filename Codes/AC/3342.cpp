#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = (a), i##_end_ = (b); i <= i##_end_; ++i)
#define RPD(i, b, a) for (int i = (b), i##_end_ = (a); i >= i##_end_; --i)
#define LOWBIT(x) ((x)&(-x))
#define PB push_back

template<typename T> inline bool chkmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

typedef long long LL;
const LL oo = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 200010;

inline int read()
{
    char c = getchar(); int x = 0, f = 1;
    while(c < '0' || c > '9'){if(c == '-') f = -1; c = getchar();}
    while(c >= '0' && c <= '9'){x = x * 10 + (c - '0'); c = getchar();}
    return x * f;
}

int main()
{
    int n = read(), id;
    LL mi = oo;
    REP(i, 0, n - 1){
        int sum = read();
        if(sum <= i){
            if(i < mi){
                mi = i;
                id = i + 1;
            }
        }
        else{
            int k = (sum - i) / n + ((sum - i) % n != 0);
            if((LL)k * n + i < mi){
                mi = (LL)k * n + i;
                id = i + 1;
            }
        }
    }
    cout << id << endl;
    return 0;
}
