#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define CLEAR(a) memset(a,0,sizeof a)
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define fr freopen("input.txt", "r", stdin);
#define fw freopen("output.txt", "w", stdout);
typedef long long LL;
typedef pair<int,int> pii;
const int MOD = 1e9 + 7;
const int MAX = 1e7 + 810000;

int fn(int n) {
    int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main() {
    int k;
    cin >> k;
    int cnt = 0;
    REP(i, MAX) {
        if(fn(i) == 10) cnt++;
        if(k == cnt) {
            cout << i;
            return 0;
        }
    }
    cout << cnt ;
    return 0;
}