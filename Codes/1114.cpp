#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ff first
#define ss second
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define int long long
#define all(a) a.begin(), a.end()
#define inf (1LL<<61)
#define ull unsigned long long
#define debug1(x) cerr << #x << ": " << x <<'\n'
#define debug2(x, y) cerr << #x << ": " << x << '\t' << #y << ": " << y <<'\n'
#define debug3(x, y, z) cerr << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z <<'\n'
using namespace std;
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
int gcd(int x,int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
int expo(int n,int m,int p)   //modULAR EXPONENTIATION
{
    int r=1;
    n=n%p;
    while(m>0)
    {
        if(m%2)
            r=(r*n)%p;
        n=(n*n)%p;
        m=m/2;
    }
    return r%p;
}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}
int32_t main()
{
   IOS;
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin); 
   freopen("output.txt","w",stdout);
   #endif
   /********************* Code starts here ***********************/
   int n,d;
   cin>>n>>d;
   vector<pair<int,int> >v(n);
   for(int i=0;i<n;i++)
   {
   	cin>>v[i].ff>>v[i].ss;
   }
   sort(all(v));
   int ans=0;
   int j=0;
   ans=v[j].ss;
   int m=ans;
   for(int i=1;i<n;i++)
   {
   	while(abs(v[i].ff-v[j].ff)>=d)
   	{
   		m=m-v[j].ss;
   		j++;
   	}
   	m=m+v[i].ss;
   	ans=max(ans,m);
   }
   cout<<ans<<endl;
} 
