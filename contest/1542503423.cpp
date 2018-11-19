#include<bits/stdc++.h>

using namespace std;
const int M =1e5 + 50;

#define rush() int T;cin>>T;while(T--)

bool vis[26];

int main() {

	int h,m,s,u,v;
	scanf("%d %d %d %d %d",&h,&m,&s,&u,&v);
	
	vis[h] = 1;
	vis[m/5] = 1;
	vis[s/5] = 1;
	if(vis[0]) vis[12] = 1;
	if(vis[12]) vis[0] = 1;
	
	if(u > v) swap(u,v);
	bool f = 1;
	for(int i=u;i<v;i++) {
//		printf("%d ",i);
		if(vis[i]) {
			f = 0;
			break;
		}
	}
	
//	puts("");
	
	bool ff = 1;
	for(int i=v;i<u+12;i++) {
		int j = (i-1)%12+1;
//		printf("%d ",j);	
		if(vis[j]) {
			ff = 0;
			break;
		}
	}
	
	puts( f||ff ? "YES" : "NO");
}


