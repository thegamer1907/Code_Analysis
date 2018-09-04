#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define M 1000000007
#define ff first
#define ss second
#define SIZE 300005
#define fast cin.tie(0);cout.tie(0);cin.sync_with_stdio(false)
#define endl '\n'
#define mset(v,x) memset(v,x,sizeof(v))
#define ex exit(0);
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<bool> vb;
const ll inf = 1e15 + 15;

int main()
{
    //fast;
#ifdef vanshaj
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w",stdout);
#endif // vanshaj

ll n , k , temp , ans = 0;   map<ll ,ll > first ,middle;
cin >> n >> k;

for(ll i=0;i<n;i++)
{
    cin >> temp;
    if (temp%k ==0)
        {
            ans += middle[temp/k];
            middle[temp] += first[temp/k];
        }
        first[temp]++;
}
cout << ans;
    return 0;
}
































