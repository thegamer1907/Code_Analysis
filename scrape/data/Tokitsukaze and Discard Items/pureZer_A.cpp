//
// Created by pureZer on 2019-07-14.
//
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const double PI = acos(-1.0);
const int INF = 99999999;
const double eps = 1e-6;
const int maxn = 1e5+5;

ll i, j, num, tol, x;
ll n, m, k, p[maxn];

int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    for(int i = 0; i < m; ++i) cin >> p[i];
    sort(p, p+m);
    num = k;
    while(j < m) {
        x = 0;
        while(x < k && j < m) {
            if(p[j] > num) break;
            ++j;
            ++x;
        }
        if(x == 0) {
            num = num + k * ((p[j]-num) / k);
            if(num < p[j]) num += k;
        }
        else num += x, ++tol;

    }
    cout << tol << endl;
    return 0;
}