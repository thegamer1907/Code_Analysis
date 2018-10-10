#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define INF 200000000000000LL
#define M 1000000007
#define ff first
#define ss second
#define mod(x) (x = (x)%M)
#define SIZE 10000005
#define fast cin.tie(0);cout.tie(0);cin.sync_with_stdio(false)
#define endl '\n'
#define mset(v,x) memset(v,x,sizeof(v))
typedef long long ll;
using namespace std;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
vector<bool> isprime(SIZE,true);
vi freq(SIZE,0);
int main()
{
    fast;
#ifdef vanshaj
    freopen("input.txt", "r", stdin);
 //   freopen("output.txt", "w",stdout);
#endif // vanshaj

    ll n,temp,m,a,b;
    cin>>n;
    vi v,prefix(SIZE);
    for(ll i=0; i<n; i++)
    {
        cin>>temp;
        v.pb(temp);
    }
    //sort(all(v));

    vi prime;
   ll maxm = *max_element(all(v));
    for(ll i=2; i*i<=maxm; i++)
        {
            if (isprime[i])
                {
                    for(ll j=i*2; j<=maxm; j+=i)
                          isprime[j] = false;

                }
            if (i != 2)
                i++;
        }
    for(auto it : v)
        freq[it]++;

    for(ll i=2;i<=maxm;i++)
        if (isprime[i]) prime.pb(i);

    for(auto p : prime)
    {
        ll c=0;
        for(ll i=p; i<=maxm;i+=p)
            c+=freq[i];
        prefix[p] = c;
    }
    for(ll i=1;i<=10000000;i++)
        prefix[i] += prefix[i-1];
    cin>>m;
    while(m--)
    {
        cin>>a>>b;
        a = min(a, 10000000LL);
        b = min(b , 10000000LL);
        cout<<prefix[b] - prefix[a-1]<<endl;
    }
    return 0;
}
