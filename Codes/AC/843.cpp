#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <climits>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <cstring>
#include <string>
#include <memory.h>
#include <list>
#include <deque>
#include <cstdlib>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define INF 1000000009
#define N 100005
#define maxn 1000005

using namespace std;

typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef pair <int, ii> iii;
typedef vector <iii> viii;
typedef long long LL;

int main(){
    //freopen("main.inp", "r", stdin);
    //freopen("main.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    LL n,k;
    cin >> n >> k;
    cout << __builtin_ctzll(k) + 1;
    return 0;
}
