#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define maxn 200005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define ms(i) memset(i,0,sizeof(i));
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	while(cin>>n>>q){
		ll now=0;
		vector<ll>pre;
		fr(i,0,n){
			ll add;
			cin>>add;
			now+=add;
			pre.pb(now);
		}
		now=0;
		while(q--){
			ll add;
			cin>>add;
			now+=add;
			if(now>=pre[n-1]){
				now=0;
				cout<<n<<endl;
			}
			else{
				cout<<n-(lower_bound(pre.begin(),pre.end(),now+1)-pre.begin())<<endl;
			}
		}
		cout<<endl;
	}
}
