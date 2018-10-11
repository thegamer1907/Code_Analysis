    #include <bits/stdc++.h>
    #define Mod 1000000007
    #define INF 1e9
    #define INFL 2e18
    #define EPS 1e-9
    #define pb push_back
    #define mp make_pair
    #define SET(a) memset(a,-1,sizeof(a))
    #define CLR(a) memset(a,0,sizeof(a))
    #define CPY(a,b) memcpy(a,b,sizeof(a))
    #define all(a) (a).begin(),(a).end()
    #define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define N 300005
    #define fs first
    #define sc second
    #define LSOne(S) (S & (-S))
    using namespace std;
    typedef  long long int ll;
    typedef pair<int,int> ii;
    typedef vector <ii> vii;
    typedef vector <int> vi;
    ll modPow(ll x,ll y,ll p) {ll res = 1;x = x % p;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;} return res;}


ll arr[N],adi[N];
   
    int main()
    {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios;

    ll n;
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        adi[i]=ceil(double(arr[i]-i)/n);
        if(adi[i]<0)
            adi[i]=0;
    }
    // for(int i=0;i<n;i++)
    //     cout<<adi[i]<<" ";
    // cout<<endl;

    ll minn=INFL,ind;
    for(int i=0;i<n;i++)
    {
        if(adi[i]<minn)
        {
            minn=adi[i],ind=i+1;
            
        }
    }
    cout<<ind<<endl;








    











    return 0;
  
   }    
    
