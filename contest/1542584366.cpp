#define problem "868C"
/*
------------------------------------------------------
******************************************************
******************************************************
------------------------------------------------------
*/
#include <bits/stdc++.h>
#define fi first
#define se second
#define MEMSET_INF 127
#define Z 0
using namespace std;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef map<string, int> msi;
typedef map<int, vector<int> > mivi;
typedef pair<int, ii> i_ii;
typedef pair<ii, int> ii_i;
typedef pair<double, double> dd;
const ii queen[8] = {ii(-1, 0), ii(-1, 1), ii(0, 1), ii(1, 1), ii(1, 0), ii(1, -1), ii(0, -1), ii(-1, -1)};
const int maxN = 1e5 + 11, maxA = 2e6;
int N, K, A[maxN], C[maxA];

ii operator + (const ii &a, const ii &b){
	return ii(a.fi + b.fi, a.se + b.se);
}

int main(){
    #ifndef ONLINE_JUDGE
	freopen(problem".inp", "r", stdin);
	freopen(problem".out", "w", stdout);
    #endif // ONLINE_JUDGE
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        for(int j = Z; j < K; j++){
            int x;
            cin >> x;
            A[i] |= x << j;
        }
        C[A[i]]++;
    }
    for(int i = Z; i < 1 << K; i++)
        for(int j = Z; j < 1 << K; j++)
    if(C[i] && C[j] && (i & j) == Z){
        puts("YES");
        return Z;
    }
    puts("NO");
}
