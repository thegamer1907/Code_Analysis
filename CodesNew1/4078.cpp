#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define maxn 200005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define ms(i) memset(i,0,sizeof(i));
ll cont[maxn];
int main(){
	int n,q;
	while(cin>>n>>q){
		fr(i,0,n)cin>>cont[i];
		vector<ll>pre;
		ll now=0;
		for(int i=0;i<n;i++){
			now+=cont[i];
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
