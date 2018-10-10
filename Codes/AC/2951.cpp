
#include<bits/stdc++.h>

using namespace std;
//using namespace __gnu_pbds;

typedef long long int	ll;
typedef long double	ld;
typedef pair<int,int>   ii;
typedef vector< ii >   vii;
typedef vector<int>     vi;
typedef vector< vi >   vvi;
//typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

#define mm 1000005
#define nn 5005
#define xx real()
#define yy imag()
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(a) (ll)(a.size())
#define all(a) a.begin(),a.end()
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define rep(i, a, b) for(int i = int(a); i <= int(b); ++i)
#define cases ll t;  cin>>t;   while(t--)
#define check(a,n) forn(iiii,int(n)) cout<<int(a[iiii])<<" "; cout<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int fail[mm];

int main()
{
    fast_io;
    string s;
    cin>>s;
    int n=sz(s),i=1,j=0,maxi=0;
    while(i<n)
    {
        if(s[i]==s[j]) j++,fail[i]=j,i++;
        else
        {
            if(j) j=fail[j-1];
            else i++;
        }
    }
    forn(i,n-1) maxi=max(maxi,fail[i]);
    //check(fail,n);
    if(fail[n-1]==0) cout<<"Just a legend";
    else if(maxi>=fail[n-1]) forn(i,fail[n-1]) cout<<s[i];
    else
    {
       if(fail[fail[n-1]-1]==0) cout<<"Just a legend";
       else forn(i,fail[fail[n-1]-1]) cout<<s[i];
    }
    return 0;
}
