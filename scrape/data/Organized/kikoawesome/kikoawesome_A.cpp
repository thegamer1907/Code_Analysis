#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pi pair<int, int>
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define pl pair<ll, ll>
#define pd pair<double, double>
#define vp vector<pi>
#define f(i, n) for(int i = 0; i < n; i++)
#define fo(i, a, n) for(int i = a; i < n; i++)
#define INF 1<<30
#define mod (1000*1000*1000+7)
#define sz(x) int((x).size())

using namespace std;

ll arr[100005];

int main(int argc, char* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n, m, k; cin >> n >> m >> k;
    f(i, m) cin >> arr[i];
    ll ans = 0;
    ll i = 0; ll off = 0;
    ll j = 1; ll nPages = (n/k + (n%k>0));
    // cout << nPages << endl;
    int r = 0;
    while(j < nPages+1){
        ll x = j*k; ll q = 0;
        do{
            q = 0;
            while(i < m && arr[i] <= x+off){
                i++;
                q++;
            }
            // cout << j << " " <<  q << endl;
            off += q;
            ans += (q > 0);
        }while(q > 0);
        if(i < m){
            // assert(arr[i] > off);
            ll jt = (arr[i] - off + (k-1))/k;
            j = ((jt == j)?jt+1:jt);
        }else{
            break;
        }
        r++;
        assert(r < 1000000);

    }

    cout << ans << endl;
    return 0;
}