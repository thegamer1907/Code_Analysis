#define problem "868A"
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

ii operator + (const ii &a, const ii &b){
	return ii(a.fi + b.fi, a.se + b.se);
}

int main(){
    #ifndef ONLINE_JUDGE
	//freopen(problem".inp", "r", stdin);
	//freopen(problem".out", "w", stdout);
    #endif // ONLINE_JUDGE
    string S;
    int N;
    cin >> S >> N;
    vector<string> A(N);
    for(int i = Z; i < N; i++) cin >> A[i];
    for(int i = Z; i < N; i++) if(A[i] == S){
        puts("YES");
        return Z;
    }
    for(int i = Z; i < N; i++) for(int j = Z; j < N; j++)
        if(A[i][1] == S[Z] && A[j][Z] == S[1]){
            puts("YES");
            return Z;
        }
    puts("NO");
}

