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
    ll n,m,q=0;
    cin>>n;
    vector <ll> a(100);
    vector <ll> b(100);
    repl(i,0,n)
    {
        ll te;
        cin>>te;
        a[te-1]++;
    }
    cin>>m;
    repl(i,0,m)
    {
        ll te;
        cin>>te;
        b[te-1]++;
    }
    repl(i,0,100)
    {
        if(a[i]!=0)
        {
            if(i!=0)
            {
                //cout<<" -1 "<<a[i]<<"    "<<a[i-1]<<endl;
                ll te=min(a[i],b[i-1]);
                a[i]-=te;
                b[i-1]-=te;
                q+=te;
            }
            ll te=min(a[i],b[i]);
            a[i]-=te;
            b[i]-=te;
            q+=te;
            if(i!=99)
            {
                //cout<<" +1 "<<a[i]<<"    "<<b[i+1]<<endl;
                te=min(a[i],b[i+1]);
                a[i]-=te;
                b[i+1]-=te;
                q+=te;
            }
        }
    }
    cout<<q;
    Ex(0);
}