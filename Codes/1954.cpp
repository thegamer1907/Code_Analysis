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
const int mod = (int)1e8;
const int MAX = (int)2e5+5;
LL store[MAX];
map<LL, LL>cnt1;
map<LL, LL>cnt2;
map<LL, LL>pl;
int main(void){
    int n, k; scanf("%d %d", &n, &k);
    rep(i, n) scanf("%lld", store + i);
    if(k == 1){
        LL res = 0;
        rep(i, n){
            cnt1[ store[i] ]++;
            if(cnt1[ store[i] ] > 2){
                res += (cnt1[ store[i] ] - 1)*(cnt1[ store[i] ] - 2)/2;
            }
        }
        printf("%lld", res);
    }
    else{
        LL res = 0;
        rep(i, n){
            if(store[i] == 0){
                cnt1[0]++;
                if(cnt1[0] > 2){
                    res += (cnt1[0]-1)*(cnt1[0]-2)/2;
                }
                continue;
            }
            cnt1[ store[i] ]++;
            if(store[i] % k == 0){
                cnt2[ store[i] ]++;
                pl[ store[i]*k ] += cnt1[ store[i] / k];
                if((store[i] / k ) % k == 0) res +=pl[store[i]];
            }
        }
        printf("%lld", res);
    }
    return 0;
}
