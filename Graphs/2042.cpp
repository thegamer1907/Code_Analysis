#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define num 100001

int n,m,ans=0;
vector<int> t[num];
int a[num];
bool visited[num]={0};

void paths(int i,int cat){
	if(a[i]==1) cat++;
	else cat=0;
	if(cat>m) return;
	visited[i]=1;
	bool leaf=1;
	for(int j=0;j<t[i].size();j++){
		if(visited[t[i][j]]==0){
			leaf=0;
			paths(t[i][j],cat);
		}
	}
	if(leaf) ans++;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		t[x].pb(y);
		t[y].pb(x);
	}
	paths(1,0);
	cout<<ans<<endl;
	return 0;
}
