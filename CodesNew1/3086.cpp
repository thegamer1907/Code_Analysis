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
const int MAX = (int)1e6+5;
string s;
vector<int>store;
LL dp[MAX][2];
int main(void){
    int k; scanf("%d", &k);
    cin >> s; int l = s.length();
    rep(i, l){
        if(s[i] == '1') store.pb(i);
    }
    if(k == 0){
        LL qq = 0;
        if((int)store.size() == 0) printf("%lld", (LL)l*(l+1)/2); 
        else{
            store.pb(l);
            rep(i, (int)store.size()){
                if(i == 0) qq += (LL)store[i]*(store[i]+1)/2;
                else{
                    LL num = store[i] - store[i-1] - 1;
                    qq += num*(num+1)/2;
                }
            }
            printf("%lld", qq);
        }
        return 0;
    }
    int cnt = 0;
    per1(i, l-1, 0){
        if(s[i] == '1'){
            dp[i][0] = cnt;
            cnt = 0;
        }
        else cnt++;
    }
    cnt = 0;
    rep(i, l){
        if(s[i] == '1'){
            dp[i][1] = cnt;
            cnt = 0;
        }
        else cnt++;
    }
    LL res = 0;
    rep(i, (int)store.size()-k+1){
        res += (dp[ store[i] ][1] + 1) * (dp[ store[i+k-1] ][0] + 1);
    }

    printf("%lld", res);
    return 0;
}
