#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <locale>
using namespace std;
#define MS0(I) memset(I, 0, sizeof(I));
#define MS1(I) memset(I, -1, sizeof(I));
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, s, n) for(int i = (s); i < (n); ++i)
#define per1(i, a, b) for(int i = a; i >= b; --i)
#define mkp make_pair
#define pb push_back 
#define F first
#define S second
#define ALL(I) (I).begin(), (I).end()
typedef const void CV;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int INF = (int)1e9;
const int mod = (int)1e9+7;
const int MAX = (int)3e5+5;
int store[MAX];
int zero[MAX];
int main(void){
    int n, m; scanf("%d %d", &n, &m);
    rep1(i, 1, n+1) scanf("%d", store + i);
    if(!m){
        int res = 0;
        int cnt = 0;
        rep1(i, 1, n+1){
            if(store[i]) cnt++;
            else cnt = 0;
            res = max(cnt, res);
        }
        printf("%d\n", res);
        rep1(i, 1, n+1) printf("%d ", store[i]);
        return 0;
    }
    rep1(i, 1, n+1){
        zero[i] = zero[i-1];
        if(!store[i]) zero[i]++;
    }
    if(zero[n] == 0){
        printf("%d\n", n);
        rep1(i, 1, n+1) printf("%d ", store[i]);
        return 0;
    }
    int maxx = 0;
    int pos = 0;
    int cnt = 0;
    rep1(i, 1, n+1){
        if(!store[i]){
            if(zero[n] - zero[i-1] <= m){
                if(n - i + 1 + cnt > maxx){
                    maxx = n - i + 1 + cnt;
                    pos = i;
                } 
                break;
            }
            else{
                int it = upper_bound(zero + i, zero + n + 1, zero[i-1] + m) - zero - 1;
                //printf("%d %d\n", i, it);
                if(it - i + 1 + cnt > maxx){
                    maxx = it - i + 1 + cnt;
                    pos = i;
                }
            }
            cnt = 0;
        }
        else cnt++;
    }
    rep1(i, pos, n+1){
        if(!m) break;
        if(!store[i]){
            store[i] = 1;
            m--;
        }
    }
    printf("%d\n", maxx);
    rep1(i, 1, n+1) printf("%d ", store[i]);
    return 0;
}
