/*input
8 5
1 2 1 2 1 1 1

*/
#include<bits/stdc++.h>
#define ull 		unsigned long long
#define ll 			long long
#define M 			1000000007
#define pb 			push_back
#define p_q 		priority_queue
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define sz(x)       (int)x.size()
#define endl        '\n'
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios	    	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mp 			make_pair
#define lb 			lower_bound
#define ub			upper_bound
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define inf         (ull)1e15
#define fill(a,val) memset(a, (val), sizeof a)
using namespace std;
int n,k,z=0;
int a[(ll)3e4+1];
bool vis[(ll)3e4+1]={0};
void dfs(int s)
{
	if(s==k)
		z=1;
	vis[s]=1;
	if(!vis[a[s]+s])
	dfs(a[s]+s);
}
int main(void)
{
	ios
	cin>>n>>k;
	rep(i,1,n)
	cin>>a[i];
	dfs(1);
	if(z==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}