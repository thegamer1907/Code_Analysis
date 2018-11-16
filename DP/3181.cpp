#include <bits/stdc++.h>
using namespace std;
#define INF 100000005
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define FORC(v,it) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define endl '\n'
#define PI 3.14159265358979323846
#define all(v) (v).begin(), (v).end()
#define mem(arr,val) memset(arr,val,sizeof arr)
#define sz(c) ((int)c.size())
#define ff first
#define ss second
#define debug(s) cout<< #s <<" = "<< s <<endl
#define debugarr(arr, n) cout<< #arr << " = "; for(int i = 0; i < n; i++) {cout<<arr[i]<<" \n"[i == n - 1]; }
#define debugc(c) cout << #c << " = "; for(auto x : c) cout<<x<<" "; cout << endl
const int maxN = 1e5+5, MOD = 998244353, eps = 1e-7;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

ll n, m, a, b, c, s;

/*
100000 4999950000
*/
int main() {

    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin >> n;

    ll arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int maxi = 1, acum = 1;

    for(int i = 0; i<n-1; i++){
        if(arr[i+1]<=arr[i]*2){
            acum++;
            maxi = max(maxi,acum);
        }
        else{
            acum = 1;
        }
    }

    cout << maxi << endl;

	return 0;
}
