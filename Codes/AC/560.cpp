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
    int k; cin >> k;
    FOR(i,2,100000000) {
        if (di(i)==10) k--;
        if (k==0) { cout << i << endl; return 0;} 
    }  
}