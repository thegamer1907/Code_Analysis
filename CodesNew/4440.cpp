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
const int INF = (int)1e9;
const int mod = (int)1e9+7;
const int MAX = (int)5e5+5;
string store[MAX];
int main(void){
    int n; scanf("%d", &n);
    rep(i, n) cin >> store[i];
    per1(i, n-2, 0){
        rep(j, store[i].length()){
            if(j == store[i+1].length()){
                store[i] = store[i].substr(0, j); break;
            }
            if(store[i][j] > store[i+1][j]){
                store[i] = store[i].substr(0, j); break;
            }
            else if(store[i][j] < store[i+1][j]) break;
        }
    }
    rep(i, n) cout << store[i] << endl;
    return 0;
}
