#define nl              "\n"
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define SIZE(a)           (int)a.size()
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define ff              first
#define ss              second
#define sq(a)           ((a)*(a))
#define For(i,a,b)      for(int i=a;i<=b;i++)
#define Rof(i,a,b)      for(int i=a;i>=b;i--)
#define Rep(i,b)        for(int i=0;i<b;i++)
#define MOD             1000000007
#define PI              acos(-1.0)
#define eps             1e-9
#define Linf            2e18
#define inf             1<<30
#define MX5             100005
#define MX6             1000006
#define GCD(a,b)	__gcd(a,b)
#define Abs(a)		abs(a)
#define input(a,b)	scanf("%lld%lld",&a,&b)
#define output(a)	printf("%lld",a);
#define mem(a)          memset(a,-1,sizeof(a))
#define clr(a)          memset(a,0,sizeof a)
#define mk              make_pair
#define pLL             pair<ll,ll>
#define ff              first
#define ss              second





#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n,i,counter=0,a;
    vector<ll>v;
    cin >> n;
    Rep(i,n)
    {
        cin >> a;
        v.push_back(a);
    }
    SORT(v);
    a=n/2;
   ll last=a;
    Rep(i,a)
    {
        while(last<n)
        {
            if(2*v[i]<=v[last])
            {
                counter++;
                last++;
                break;
            }
            else
            {
               last++;
            }
        }
    }
    cout << n-counter << endl;
}
