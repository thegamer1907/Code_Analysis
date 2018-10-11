/****HVARDHANSINGH****/

#include<bits/stdc++.h>
using  namespace std;

typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
typedef set<int> si;
typedef map<int,int> mii;

#define F   first
#define S   second
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,it) for(typeof((c).begin() it = (c).begin(); it != (c).end(); it++)
#define present(c,x) ((c).find(x) != (c).end())         //for sets, maps..etc
#define cpresent(c,x) (find(all(c),x) != (c).end())  //for vectors

#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define endl    "\n"

/*******************************GLOBAL DECLARATION***************************************/
int N;
int t;
vi v;
vi sum;
/****************************************************************************************/

bool read(int n)
{   
    int i,j,r=0;
    for(i=n-1,j=0; i<N; i++,j++)
    {
        if(j-1 >= 0)
        {
            r = sum[i]-sum[j] + v[j];   
        }
        else 
            r = sum[i];
        if(r<=t)
            return true;
    }
    return false;
}

int calc()
{
    int hi = N;
    int lo = 0;
    while(lo<hi)
    {
        int mid = (hi+lo)/2;
        if(lo==mid)
            mid=hi;
        if(read(mid))
            lo = mid;
        else
            hi = mid-1;
    }
    return lo;
    
}

int main()
{
	ios_base::sync_with_stdio( false );
	cin.tie(0);
	cout.tie(0);
	
	int T=1;
	while(T--)
	{   int s=0;
	    cin>>N;
	    cin>>t;
	    rep(i,0,N)
	    {
	        int tmp;
	        
	        cin>>tmp;
	        s+=tmp;
	        v.pb(tmp);
	        sum.pb(s);
	    }
	    int ans = calc();
	    cout<<ans;
	}
	return 0;
}