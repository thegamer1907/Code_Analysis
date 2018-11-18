#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
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
const int MAX = (int)2e5+5;
void build(){
    return ;
}
double store[5];
double s, e;
int v[5];
void Init(){
    rep(i, 3) scanf("%lf", store + i);
    scanf("%lf %lf", &s, &e);
    store[0] = store[0]*30 + store[1] / 2 + store[2] / 120;
    store[1] = store[1]*6 + store[2] / 10; 
    store[2] *= 6;
    s *= 30;
    e *= 30;
    return ;
}
bool flag1, flag2;
void sol(){
    rep(i, 3){
        if((store[i] - s)*(store[i] - e) < 0) flag1 = 1;
        else flag2 = 1;
    }
    if(flag1 && flag2)puts("NO");
    else puts("YES");
    return ;
}
int main(void){
    Init();
    build();
    sol();
    return 0;
}
