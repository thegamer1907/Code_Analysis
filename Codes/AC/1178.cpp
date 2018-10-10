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
const int MAX = (int)2e2+5;
map<string, int>cnt;
int main(void){
    int n, m; scanf("%d %d", &n, &m);
    rep(i, n){
        string tmp;
        cin >> tmp;
        cnt[tmp]++;
    }
    int num = 0;
    rep(i, m){
        string tmp;
        cin >> tmp;
        if(cnt[tmp]) num++;
    }
    n -= num; m -= num;
    if(num % 2 == 1) m--;
    if(n > m) puts("YES");
    else puts("NO");
    return 0;
}
