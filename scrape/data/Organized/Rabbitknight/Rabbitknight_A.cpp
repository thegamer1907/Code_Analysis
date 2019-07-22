#include<iostream>
#include<numeric>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<iomanip>
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define ll long long
#define pll pair<ll,ll>
#define rep(i,from,to) for(int i=from;i<to;i++)
#define repd(i,from,till) for(int i=from;i>=till;i--)
#define waste ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inf 1e9+1
#define mod 1e9+7
#define inf1 1e18+1
#define pie 3.14159265358979323846
#define N 100005

using namespace std;

int solve(){
 ll n,m,k;
 cin>>n>>m>>k;
 ll p[m];
 rep(i,0,m)cin>>p[i];
 ll cnt=0,op=0,cur=0;
 rep(i,0,m){
 	int j=0;
 	cur=(p[i]-cnt-1)/k;
 	while((p[i]-cnt-1)/k==cur){
 		i++;
 		j++;
	 }
	 cnt+=j;
	 if(j!=0)op++;
	 i--;
 }
 cout<<op<<endl;
 
}
int main()
{
   	waste;
   	int t;
   	//cin>>t;
   	t=1;
   	while(t--){
   		solve();
   	}
}