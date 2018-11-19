#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iomanip>

#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <utility>

#include <math.h>
#include <complex>

#include <assert.h>
#include <time.h>

#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <bitset>
#define FI first
#define SE second
#define MP make_pair
#define PB push_back
#define endl '\n'
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

void desperate_optimization(int precision){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
}

const int N = 1e5;

LL DP[2][N + 5];
LL arr[N + 5];
LL occ[N + 5];
LL res = 0;
LL LEFT = 1, RIGHT = 0;

void increase(int idx) {
    res += occ[arr[idx]];
    occ[arr[idx]]++;
}

void decrease(int idx) {
    occ[arr[idx]]--;
    res -= occ[arr[idx]];
}

LL move(int le,int ri) {
    while(RIGHT < ri) {
        RIGHT++;
        increase(RIGHT);
    }
    while(RIGHT > ri) {
        decrease(RIGHT);
        RIGHT--;
    }
    while(LEFT > le) {
        LEFT--;
        increase(LEFT);
    }
    while(LEFT < le) {
        decrease(LEFT);
        LEFT++;
    }
    return res;
}

void DPDNC(int idx,int l,int r,int le,int ri) {
    if(l > r) return ;
    int mid = (l + r) / 2;
    int pos = -1;
    LL ans = 1e18;
    for(int i = le;i <= min(mid,ri);i++) {
        LL temp = DP[(idx + 1) % 2][i - 1] + move(i,mid);
        if(ans > temp) {
            ans = temp;
            pos = i;
        }
    }
    DP[idx%2][mid] = ans;
    DPDNC(idx,l,mid - 1,le,pos);
    DPDNC(idx,mid + 1,r,pos,ri);
}

int main(){
    desperate_optimization(10);
    clock_t CLOCK;
    CLOCK = clock();
    int n,k;
    cin>>n>>k;
    for(int i = 1;i <= n;i++) cin>>arr[i];
    for(int i = 1;i <= n;i++) {
        DP[1][i] = move(1,i);
    }
    for(int i = 2; i <= k;i++) {
        DPDNC(i,1,n,1,n);
    }
    cout<<DP[k%2][n]<<endl;
    cerr<<"PROCESSED TIME "<<(clock() - CLOCK) * 1.0 / (1.0 * CLOCKS_PER_SEC)<<endl;
    return 0;
}


