#include<bits/stdc++.h>
using namespace std;
int n,k;
set<pair<int,int> > mp;
int a[7],ar;
int vis[200];
main() {
	cin>>n>>k;
	for(int i=1;i<=n;i++) {
		for(int j=0;j<k;j++) {
			scanf("%d",&a[j]);
		}
		ar=0;
		for(int j=0;j<k;j++) {
			ar+=(a[j]<<j);
		}
		vis[ar]=1;
	}
	for(int aa=0;aa<=20;aa++) if(vis[aa]) {
		for(int bb=0;bb<=20;bb++) if(vis[bb]) {
			int u=aa,v=bb;
			int ok=0;
			for(int j=0;j<k;j++) {
				if(((1<<j)&u)&&((1<<j)&v)) {
					ok=1;
					break;
				}
			}
			if(!ok) {
//				cout<<u<<" "<<v<<"\n";
				return puts("YES"),0;
			}
		}
	}
	puts("NO");
	
}