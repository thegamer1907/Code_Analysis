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
    ll n,q=0,z=0;
    cin>>n;
    vector <bool> a;
    repl(i,0,n)
    {
        bool te;
        cin>>te;
        a.push_back(te);
        q+=te;
    }
    repl(i,0,n)
    {
        ll te=q;
        repl(j,i,n)
        {
            if(a[j]==0)
            {
                te++;
            }
            else
            {
                te--;
            }
            z=max(z,te);
        }
    }
    cout<<z;
    Ex(0);
}