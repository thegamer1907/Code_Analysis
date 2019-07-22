/************************Code by Hardik Aggarwal!!!!***********************************/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL); 

#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define pu push
#define pp pop_back
#define in insert
#define ld long double
#define endl '\n'
#define debug cout << "Hold right there sparky.....\n";
#define forn(low,high,i) for(i=low;i<high;i++)
#define forrev(high,low,i) for(i = high; i>= low;i--)
#define trace(x) cerr << #x << ": " << x << " " << endl;

typedef long long int ll;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
const ll mod =998244353;
ll p[100001];
 ll n,m,k;
ll bsearch(ll x)
{   ll l=0,r=m-1;
    while(r-l>1)
    {
        ll mid=(l+r)>>1;
        if(p[mid]<=x)
            l=mid;
        else
            r=mid;


    }
    if(p[r]<=x)
        return r;
    else 
        return l;
}
int main()
{
	   #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    IOS
   
    cin>>n>>m>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>p[i];
    }
    ll cnt=0,ex=0;
    for(ll i=0;i<m;)
    {
        ll x=p[i];
        ll y=x-ex;
        ll next=((y+k-1)/k)*k;
        next=next-y;

        ll j=bsearch(x+next);
        ll in=(j-i+1);
        cnt++;
        
        if(j==m-1)
        {
            break;
        }
        
        ex+=in;
        i=j+1;

        

    }

    cout<<cnt<<endl;





}