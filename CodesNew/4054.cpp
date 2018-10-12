/*
    Author - AYUSH GUPTA
    B.Tech IT 3rd year 
    NIT ALLAHABAD 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fr(i,a,b) for(i=a;i<=b;i++)
#define fr2(i,a,b) for(i=a;i>=b;i--)
#define err1(a) cout<<a<<endl
#define err2(a,b) cout<<a<<" "<<b<<endl
#define err3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define SIZE 1000001
#define imi INT_MIN
#define ima INT_MAX

void speedup(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
ll expo(ll a,ll b,ll m){ll res=1;while(b){if(b%2==1)res=(res*a)%m;a=(a*a)%m;b/=2;}return res%m;}

ll p[SIZE], par[1000002], lp[1000003];
void seive()
{
    memset(p,0,sizeof(p));
    ll i, j;
    for(i = 2; i*i <= SIZE; i++)
    {
        for(j = i*i; j <= SIZE; j+=i)
        {
            if(p[j] == 0)
            {
                lp[j] = i;
            }
            p[j] = 1;
        }
    }
}

ll findNaive(ll i)
{
    if(par[i]!=i)
        return par[i]=findNaive(par[i]);
    return i;
}

void UnionNaive(ll i, ll j)
{
    ll p1 = findNaive(i), p2 = findNaive(j);
    par[p1] = p2;
}

int main()
{
    speedup();
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+2), s(n, 0);
    ll i;
    fr(i, 0, n-1)
    {
        cin >> a[i];
        if (i == 0)
            s[i] = a[i];
        else
            s[i] = s[i-1] + a[i];
    }
    ll zinda = 0, curr = 0;
    while (q--)
    {
        ll k;
        cin >> k;
        ll ub = upper_bound (s.begin() + zinda, s.end(), k+curr) - s.begin();
        ll lb = lower_bound (s.begin() + zinda, s.end(), k+curr) - s.begin();
        
        if (ub >= n)
        {
            cout << n << endl;
            curr = 0;
            zinda = 0;
        }
        else
        {   
            cout << n -ub << endl;
            zinda = ub;
            curr = k + curr;
        }
    }
    return 0;
}