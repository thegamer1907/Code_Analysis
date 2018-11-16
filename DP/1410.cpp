
/*  It's harder to read code than to write it.       
                                   - Joel Spolsky   
                                                    
   //Shubh                       
*/                                                  
 
#include <bits/stdc++.h>

//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val
 
using namespace std;
 
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< ll >
#define ss second
#define ff first
#define ll long long
#define ld long double
#define pii pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define mod (1000*1000*1000+7)
#define pqueue ((priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define pi 3.14159265359
ll i,j;

ll maxsub(ll a[], ll n)
{
    ll max_so_far = -1e9,max_ending =0;
    rep(i,n)
    {
        max_ending+=a[i];
        if(max_so_far<max_ending)
            max_so_far=max_ending;
        if(max_ending<0)
            max_ending=0;
    }
    return max_so_far;
}


int main()
{
    IOS;
    ll n;
    cin>>n;
    ll a[n];
    ll b[n],count=0;
    f(i,0,n)
    {
        cin>>a[i];
        b[i]=1;
        count+=a[i];
        if(a[i])b[i]=-1;
    }
    ll x=maxsub(b,n);
    //cout<<x<<endl;
    cout<<count+x<<endl;





    return 0;
} 