#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define ldb ldouble
#define szz(x) (int)(x).size()
#define repi(i, p, n) for(int i=p;i<n;i++)
#define repl(i, p, n) for(ll i=p;i<n;i++)
#define Se second
#define Fi first
#define C(x) cout<<x;
#define Ex(x) return x;
#define Endl(x) cout<<endl;
#define CINvector(a,n) repl(i,0,n){ll te; cin>>te; a.push_back(te);}
#define inpb(a,b) a.push_back(b);
#define Fnd(a,x) (find(a.begin(), a.end(), x)!=a.end())

typedef tuple <int, int, int> t3;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd;

//ll Min=1000000000000000000;
//ll Max=-Min;

int main()
{
    string s;
    ll m;
    cin>>s>>m;
    vector <int> a;
    ll f=0;
    a.push_back(0);
    repl(i,0,s.size()-1)
    {
        if(s[i]==s[i+1])
        {
            f++;
        }
            a.push_back(f);
    }
    repl(i,0,m)
    {
        ll l,r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    Ex(0);
}