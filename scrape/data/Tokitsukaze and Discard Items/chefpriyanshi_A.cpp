//#include <boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
//typedef cpp_int c_i;
#include<bits/stdc++.h>
typedef long long ll;
#define MOD 1000000007
#define p0(x) cout <<x <<" "
#define p1(x) cout <<x <<endl
#define p2(x,y) cout <<x <<" " <<y <<endl
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<endl
#define p4(w,x,y,z) cout <<w <<" " <<x <<" " <<y <<" " <<z <<endl
#define nL cout<<endl
# define pb push_back
#define mp make_pair
//#define mp make_pair
# define vi vector<int>
# define vll vector<ll>
# define vvi vector< vector <int> >
#define f first
#define s second
# define vvll vector<vector <ll> >
# define srt(a) sort(a.begin(),a.end())
# define ff(i,a,b) for(int i=a;i<b;i++)
# define frev(i,a,b) for(int i=a;i>=b;i--)
# define srtrev(a) sort(a.begin(),a.end(),cmp)
#define gcd(a,b) __gcd(a,b);
#define lcm(a,b)   (a/gcd(a,b))*b;
using namespace std;
#define Map map<int,int>
#define Umap unordered_map<int,int> 
ll mod = 1000000007;
#define fast  ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool cmp(ll a,ll b)
{
	return a>b;
}
ll Pow(ll a,ll b )  //for modulus power
{
	ll ans=1,mul=a;
	while(b)
	{
		if(b&1)ans=(ans*mul)%mod;
		mul=(mul*mul)%mod;
		b/=2;
	}
	return ans;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void solve()
{
 ll n,m,k;
 cin>>n>>m>>k;
 ll arr[m]={};
 ff(i,0,m)
 cin>>arr[i];
 ll start=k;
 ll count=0,ans=0;
 if(arr[0]>start)
		 {
		 ll  temp=(arr[0]-start)/k;
		 start+=temp*k;
		 while(arr[0]>start)
		 start+=k;
		}
bool check=false;
 ff(i,0,m)
 {   //cout<<start<<" "<<count<<'\n';
	//cout<<start<<'\n'; 
	if(arr[i]<=start)
	 { count++;
		

		  }
		 else
		 {
			 ans++;
			
		 start+=count;
		 if(arr[i]<=start)
		 count=1;
		 check=false;
		 if(arr[i]>start)
		 {
		 ll  temp=ceil((arr[i]-start)/k);
		 start+=temp*k;
	 while(arr[i]>start)
		 start+=k;
		 count=1;}
		}
 }
 if(check==false)
 ans++;
 

 cout<<ans;
 
 nL;
}
//driver function
    int main()
    {
		fast
		int t=1;
		//cin>>t;
		ff(T,1,t+1)
		{
			//cout<<"Case #"<<T<<": ";
			solve();
		}
    }