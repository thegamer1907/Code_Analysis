#include <bits/stdc++.h>

using namespace std;
#define REP(i, n)  for(int i=0;i<(int)(n);++i)
#define FOR(i, b, n)  for(int i=b;i<(n);++i)
#define ALL(c) (c).begin(),(c).end()
#define PB(c) push_back(c)
#define SS size()
#define ST first
#define ND second
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
template<typename T, typename U> static void amin(T &x, U y) { if (y < x) x = y; }
template<typename T, typename U> static void amax(T &x, U y) { if (x < y) x = y; }


int di(int n){
    int s = 0; 
    while(n!=0) {
        s+= n%10;
        n/=10;
    }
    return s;
}


int main() {
    ios::sync_with_stdio(0);
    int k; cin >> k;

    int N=10000;
    vi f(N+1);
    FOR(i,1,N+1) f[i]= f[i/10]+i%10;

    FOR(i,2,100000000) {
        if (f[i/N] + f[i%N]==10) k--;     // 11111|22222   count separately >1e5, <1e5
        if (k==0) { cout << i << endl; return 0;} 
    }  
}