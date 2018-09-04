#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <bitset>
#include <algorithm>
#include <list>
#include <cmath>
#include <cstdlib>
#include <locale>
#include <map>
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
const long long mod = 1000000007;
#define MAX 100005
typedef const void CV;
typedef long long LL;
typedef unsigned long long ULL;
char store[MAX];
vector<int>check;
int main(void){
    int n, k; scanf("%d %d %s", &n, &k, store);
    int an = 0, bn = 0;
    rep(i, n){
        if(store[i] == 'a')  an++;
        else bn++;
    }
    if(k >= min(an, bn)){ printf("%d", n); return 0; }
    int cnt = 1;
    rep1(i, 1, n+1){
        if(store[i] != store[i-1]){
            check.pb(cnt);
            cnt = 1;
        }
        else cnt++;
    }
    int ret = 0;
    rep(i, check.size() ){
        int v = k, sum = check[i];
        bool flag = 0;
        rep1(j, i+1, check.size() ){
            if((j - i) % 2 == 1){
                if(check[j] > v){
                    sum += v;
                    flag = 1;
                    v = 0;
                    break;
                }
                else{
                    v -= check[j];
                    sum += check[j];
                }
            }
            else sum += check[j];
        }
        if(!flag){
            if(i != 0) sum += min(check[i-1], v);
            ret = max(ret, sum);
            break;
        }
        ret = max(ret, sum);
    }
    printf("%d", ret);
    return 0;
}
