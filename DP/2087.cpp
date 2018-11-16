#include <bits/stdc++.h>
using namespace std;
#define INF 100000005
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define endl '\n'
#define PI 3.14159265358979323846
#define all(v) (v).begin(), (v).end()
#define mem(arr,val) memset(arr,val,sizeof arr)
#define sz(c) ((int)c.size())
#define ff first
#define ss second
#define EPS 1E-9
#define debug(s) cout<< #s <<" = "<< s <<endl
#define debugarr(arr, n) cout<< #arr << " = "; for(int i = 0; i < n; i++) {cout<<arr[i]<<" \n"[i == n - 1]; }
#define debugc(c) cout << #c << " = "; for(auto x : c) cout<<x<<" "; cout << endl
const int maxN = 1e5+5, MOD = 1e7+7;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

int A[maxN];
bool used[maxN];
int dp[maxN];
int n, q, m;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ofstream cout("datos.txt");

    cin >> n >> q;

    FOR(i,0,n){
        cin >> A[i];
    }

    for(int i = n-1; i >= 0; i--){
        dp[i] = dp[i+1];
        if(!used[A[i]]){
            dp[i]++;
        }
        used[A[i]] = true;
    }

    FOR(i,0,q){
        cin >> m;
        m--;
        cout << dp[m] << endl;
    }





    return 0;
}
