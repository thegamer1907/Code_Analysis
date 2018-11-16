//#pragma GCC optimize("O3")
#include <bits/stdc++.h>
//#define int long long
#define ld double
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int lg = 0;

void fin(int level){
    if(level == 0){
        cout << "Final!";
        exit(0);
    }
    cout << lg - level;
    exit(0);
}


void rec(int n, int l, int r, int a, int b, int level){
    int m = (l + r) / 2;
    if((r - l + 1) == 1)fin(level);
    if((l <= a) && (a <= m) && (l <= b) && (b <= m)){
        rec(n, l, m, a, b, level + 1);
    } else if((m + 1 <= a) && (a <= r) && (m + 1 <= b) && (b <= r)){
        rec(n, m + 1, r, a, b, level + 1);
    } else {
        fin(level);
    }
}





signed main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int n1 = n;
    while(n1 % 2 == 0){
        n1 /= 2;
        lg++;
    }
    rec(n, 1, n, a, b, 0);
}
