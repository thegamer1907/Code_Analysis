#include<bits/stdc++.h>
using namespace std;
#define sf              scanf
#define pf              printf
#define pb              push_back
#define nl              printf("\n")
#define ll              long long int

#define F               first
#define S               second
#define inf             1/0.0
#define PI              2*acos(0.0)
#define fin             freopen("input.txt", "r", stdin)
#define fout            freopen("output.txt", "w", stdout)

#define gcd(x,y)        __gcd(x,y)
#define lcm(a,b)        (a*(b/gcd(a,b)))

#define PS              system("pause")
#define MOD             1000000007
#define MX              INT_MAX
#define S              500005
#define FastIO          { ios_base::sync_with_stdio(false); cin.tie(0); }

char f,g;
string s,p;
double aa,bb,cc;
int arr[S],brr[S];
vector< int > v,va,vb;
map< string, int > mp;



int main()
{
    int a,b,c, n,m,t, i,j,k, x,y,z;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    x=n/2;
    y=n;
    z=0;
    for(i=0; i<n/2; i++)
    {
        while(true)
        {

            if(x>=n)
            {
                cout<<y<<endl;
                return 0;
            }
            if(v[i]*2<=v[x])
            {
                // cout<<v[i]<<' '<<v[x]<<' '<<x<<endl;
                y--;
                x++;
                break;
            }
            else
            {
                //cout<<v[i]<<' '<<x<<endl;
                x++;
            }

        }
    }
    cout<<y<<endl;
    return 0;
}
