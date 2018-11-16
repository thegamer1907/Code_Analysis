#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
int rt[1010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		rt[x]++;
		rt[y]++;
	}
	for(int i=1;i<=n;i++){
		if(!rt[i]){
			cout<<n-1<<'\n';
			for(int j=1;j<=n;j++){
				if(j != i)
					cout<<j<<" "<<i<<'\n';
			}
			return 0;
		}
	}

	
}