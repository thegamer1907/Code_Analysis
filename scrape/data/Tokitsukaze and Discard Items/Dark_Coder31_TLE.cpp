#include<bits/stdc++.h>
 
using namespace std;
#define ld long double
#define fi first
#define se second
//#define int long long
//
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
//
#define mem(x,y) memset(x,y,sizeof(x))
#define bitcount    __builtin_popcount
//
#define pii pair<int, int>
#define all(v) v.begin(),v.end()
 
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector< vector<int> >
#define si set<int>
#define pb push_back
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define REPD(i,a,b) for(int i=a;i>=b;i--)
const int inf=1e9;
 
const int N=3e5+1;
using namespace std;
int s[10],p[10],m[10];
int main()
{
    IOS;
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m];
    for(int i=0;i<m;i++)
     cin>>arr[i];
     int sz=k;
   set<int> st;
   int i=1,j=0;
   int ans=0;
   while(j<m)
   {
   	   while(st.size()<sz&&i<=n)
   	   {
   	   	st.insert(i);
   	   	i++;
	   }
	   bool f=0;
	   while(j<m&&st.find(arr[j])!=st.end())
	   {
	   	st.erase(st.find(arr[j]));
	  // 	cout<<arr[j]<<" ";
	   	j++;
	   	f=1;
	   	
	   }
	  // cout<<endl;
	   if(f==0) st.clear();
	   else ans++;
	  // cout<<ans<<endl;
   }
   cout<<ans;
	
    
}