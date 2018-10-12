#include<bits/stdc++.h>
using namespace std;

//io
#define sf(x) scanf("%d",&x);
#define sf2(x,y) scanf("%d %d",&x,&y);
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z);
#define pf(x) printf("%d",x);
#define pf2(x,y) printf("%d %d",x,y);
#define pf3(x,y,z) printf("%d %d %d",x,y,z);
#define sfl(x) scanf("%lld",&x);
#define sfl2(x,y) scanf("%lld %lld",&x,&y);
#define sfl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z);
#define pfl(x) printf("%lld",x);
#define pfl2(x,y) printf("%lld %lld",x,y);
#define pfl3(x,y,z) printf("%lld %lld %lld",x,y,z);
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//basic
#define pb push_back
#define ll long long
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007LL

//typedefs
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vll vector<ll>
#define vi vector<int>

//functions
#define all(c) c.begin(),c.end()
#define fill(c,val) memset(c,val,sizeof(c))

//debug
#define trace(x)                 cerr << #x << ": " << x << endl;
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

int main(){
	int n,m,maxi=0,maxiu,sum=0,a[11333],cnt,i,j;
	priority_queue<int,vi,greater<int> > pq;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}
	for(i=0;i<n;i++){
		sum+=(maxi-a[i]);
		pq.push(a[i]);
	}	
	maxiu=m+maxi;
	cnt=0;
	while(cnt<m){
		int ab=pq.top();
		ab++;
		pq.pop();
		pq.push(ab);
		cnt++;	
	}
	int mini;
	while(pq.size()){
		mini=pq.top();
		pq.pop();
	}
	cout<<mini<<" "<<maxiu;

}