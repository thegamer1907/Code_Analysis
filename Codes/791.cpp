#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef pair<int,int> II;
typedef long long LL;
#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b ;i++)
#define DOW(i,b,a) for(int i=(b),_a=(a); i>=_a ;i--)
#define TR(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define SZ(a) int((a).size())
#define ALL(a) (a).begin(),(a).end()
#define PRESENT(c,x) ((c).find(x)!=(c).end())
#define VPRESENT(c,x) (find(all(c),x)!=(c).end())
#define MP make_pair
#define PB push_back
#define FI first
#define SE second

#define md int(1e5+100)
#define mc int(1e5+100)
#define inf int(1e9+100)
#define modul int(1e9+7)

int n;
LL k;

int _find(int n, LL k)
{
   // cout<<n<<" "<<k<<endl;
    LL x= (1LL<<n)-1;
    LL mid=(x/2)+1;
    if (k==mid)
    {
        return n;
    }
    else
    {
        LL y=k;
        if (k>mid)
        {
            y=k-mid;
        }
        return _find(n-1,y);
    }
}

int main()
{
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d%lld",&n,&k);
    cout<<_find(n,k);
}

