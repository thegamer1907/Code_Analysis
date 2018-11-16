/*
try all
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i, a, b) for(int i=a; i<b; i++)
#define ffi For(i, 0, N)
#define ffj For(j, 0, M)
#define ffa ffi ffj
#define s <<" "<<
#define c <<" : "<<
#define w cout
#define e "\n"
#define pb push_back
#define mp make_pair
#define a first
#define b second
//#define int ll
const int MAXN=100000, INF=1000000000;
///500,000,000
int N;
string at;

int check(int x) {
    int ret = 0;
    while (x > 0) {
        ret += x%10;
        x /= 10;
    }
    return ret;
}

main() {
    //ifstream cin("test.in");
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    int i;
    for (i=19; N > 0; i++) {
        if (check(i) == 10) N--;
    }
    w<< i-1<<e;
}
