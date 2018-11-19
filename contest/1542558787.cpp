#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<pair<int,int> > vii;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<long long,long long> > vpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;

#define PI 3.141592653589793
#define MOD 1000000007

template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }


int main()
  {
  	int h,m,s,t1,t2;
  	cin >> h >> m >> s >> t1 >> t2;
  	t1*=2;t2*=2;
  	if(t2==24)
  		t2=0;
  	bool vis[24];
  	memset(vis,false,sizeof vis);
  	int res=(m/5);
  	vis[res*2]=true;
  	bool found=false,found2=false;
  	if(m>0 || s>0)
  		 found=true;
  	if(s>0)
  		found2=true;
  	if(m%5 || found2)
  	{
  		//found=true;
  		vis[res*2]=false;
  		vis[(res*2)+1]=true;
  	}
  	res=(s/5);
  	vis[res*2]=true;
  	if(s%5)
  	{
  		//found=true;
  		vis[res*2]=false;
  		vis[(res*2)+1]=true;
  	}
  	int k;
  	if(h==12)
  	{
  		k=0;
  		vis[k]=true;
  	}
  	else
  	{
  		k=(h*2);
  		vis[k]=true;
  	}
  	if(found)
  	{
  		vis[k]=false;
  		vis[(k+1)]=true;
  	}
  	//for(int i=0;i<24;i++)
  		//cout << vis[i]<<" ";
  	    //cout << "\n";
  	int v=t1;
  	while(v!=t2)
  	  {
  	  	v=(v+1)%24;
  	  	if(vis[v])
  	  	  {
  	  	  	found2=true;
  	  	  	break;
  	  	  }
  	  }
  	 if(v==t2)
  	 {
  	 	cout <<"YES"<<"\n";
  	 	return 0;
  	 }

  	 v=t1;
  	 while(v!=t2)
  	 {
  	 	v=(v-1+24)%24;
  	 	if(vis[v])
  	 	{
  	 		found2=true;
  	 		break;
  	 	}
  	 }
  	 if(v==t2)
  	 {
  	 	cout << "YES"<<"\n";
  	 	return 0;
  	 }
  	 cout << "NO"<<"\n";
  	 return 0;

  }