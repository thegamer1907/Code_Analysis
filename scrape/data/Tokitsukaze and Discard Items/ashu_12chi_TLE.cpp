/*author - Ashutosh Chitranshi*/
#include<bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define pow2(x) ((x)*(x))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long int
#define eb emplace_back
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define all(c) (c).begin(),(c).end()
#define nl "\n"
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector< vi > vvi;
typedef vector< vl > vvl;
typedef pair< int,int > ii;
typedef pair< ll,ll> pll;
typedef map< ll,ll> mll;
typedef map< int,int> mii;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m,k,temp;
    cin >> n >> m >> k;
    vl v;
    for(int i=0;i<m;i++)
    {
    	cin >> temp;
    	v.eb(temp);
    }
    ll flag=k;
    ll ans=0ll;
    sort(all(v));
    ll count1=0ll;
    while(true)
    {
    	ll count = lower_bound(all(v),flag)-v.begin()+1;
    	if(!binary_search(all(v),flag))
    		count--;
    	if(count>count1)
    	{
    		ans++;
    		flag = flag+count-count1;
    	}
    	else
    	{
    		flag=flag+k;
    		if(flag>n)
    			flag=n;
    	}
    	count1=count;
    	if(count==v.size())
    		break;
    }
    cout << ans << nl;
    return 0;
}