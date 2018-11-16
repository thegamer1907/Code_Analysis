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
#define MOD 1000000007
#define EPS 1E-9
#define debug(s) cout<< #s <<" = "<< s <<endl
#define debugarr(arr, n) cout<< #arr << " = "; for(int i = 0; i < n; i++) {cout<<arr[i]<<" \n"[i == n - 1]; }
#define debugc(c) cout << #c << " = "; for(auto x : c) cout<<x<<" "; cout << endl
#define maxN 55
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    ll n, m, temp;

    cin >> n >> m;

    ll arr[n];
    ll cuantos[n];

    for(ll i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    set<ll> dif;

    for(ll j = n-1; j>=0; j--)
    {
        dif.insert(arr[j]);
        cuantos[j] = dif.size();
    }

    for(ll i = 0; i<m; i++)
    {
        cin >> temp;
        cout << cuantos[temp-1] << endl;
    }
}