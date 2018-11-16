#include<bits/stdc++.h>

using namespace std;

const int N = 2018;

int p[N];
int deg[N];
vector<int> v[N];
int numb[N];

void bfs(int x) {
	queue<int> q;
	q.push(x);
	while(q.size()>0) {
		int a=q.front();
		q.pop();
		for(int i=0;i<v[a].size();i++) {
			if(numb[v[a][i]]<0) {
				numb[v[a][i]]=numb[a]+1;
				q.push(v[a][i]);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,ans=1;
	cin>>n;
	memset(numb,-1,sizeof(numb));
	for(int i=0;i<n;i++) {
		cin>>p[i];
		if(p[i]>0) {
            v[p[i]-1].push_back(i);
            deg[i]++;
		}
	}
	for(int i=0;i<n;i++) {
		if(deg[i]==0) {
          //  cout<<i<<endl;
			numb[i]=1;
			bfs(i);
		}
	}
	for(int i=0;i<n;i++) {
		ans=max(ans,numb[i]);
	}
	cout<<ans<<endl;
	return 0;
}
