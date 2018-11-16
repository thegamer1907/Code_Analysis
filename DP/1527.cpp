#include <bits/stdc++.h>

#define INF 1000005
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define pb push_back
#define endl '\n'
#define PI 3.14159265358979323846
#define fst first
#define snd second

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define MOD 1000000007
#define maxN 105
#define EPS 0.00009

ll n, m, k, y, a, b, c, t = 0;

int A[maxN];

int main() {

    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> n;

    int acum[n+1];
    acum[0] = 0;
    FOR(i,1,n+1){
        cin >> acum[i];
        acum[i] += acum[i-1];
    }

    int tot = acum[n];
    int ans = 0;


    FOR(i,1,n+1){
        FOR(j,i,n+1){
            int aux = tot;
            aux -= (acum[j] - acum[i-1]);
            aux += (j - i + 1) - (acum[j] - acum[i-1]);
            ans = max(ans, aux);
        }
    }

    cout<<ans<<endl;


}
