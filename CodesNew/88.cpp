#include <bits/stdc++.h>

using namespace std;

#define all(v)              ((v).begin()), ((v).end())
#define sz(v)               ((int)((v).size()))
#define clr(v, d)           memset(v, d, sizeof(v))
#define rep(i, v)       for(int i=0;i<sz(v);++i)
#define lp(i, n)        for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)    for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)    for(int i=(j);i>=(int)(n);--i)

typedef unsigned short	  us;
typedef long long         ll;
const ll OO = 1e8;

const double EPS = (1e-7);
int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }

#define pb                  push_back
#define MP                  make_pair
#define P(x)                cout<<#x<<" = { "<<x<<" }\n"
typedef long double       ld;
typedef vector<unsigned short>		    vus;
typedef vector<int>						vi;
typedef vector<double>					vd;
typedef vector< vi >					vvi;
typedef vector< vus >					vvus;
typedef vector< vd >					vvd;
typedef vector<string>					vs;
typedef vector<vs>					vvs;

int main()
{
    double n,sum,l,z=0;
    cin>>n>>l;
    vector<unsigned int> v;
    lp(i,n){
    cin>>sum;
    v.pb(sum);
    }
    sort(all(v));
    if(n!=1)
    {
    sum= v[1] - v[0];
    }
    else{
        sum=v[0];
    }
    int j=0;
    for(int i=1;i<(n-1);i++)
    {
        if((v[i+1]-v[i]) > sum )
        {
            j=i;
            sum=v[i+1]-v[i];
        }
    }
    double c = ((double)sum*1.00)/2.0;

    if( (v[0]-c) > 0)
    {
        c=v[0];
    }
    if( (v[n-1]+c) < l )
    {
        c=l-v[n-1];
    }

    if( j!=0 && (v[j]-c) > (v[j-1]+c) )
    {
        c=v[j]-v[j-1];
    }
    printf("%f" ,c);
}
