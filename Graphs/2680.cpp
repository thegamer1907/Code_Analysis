#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <set>
#include <cassert>
#include <queue>
#include <string>
#include <stack>
#include <bitset>
#include <cmath>

#define N 509

using namespace std;
	
char s1[N][N];
queue< pair<int,int> > q;
int vis[N][N];
int dr[]={-1,0,0,1},dc[]={0,-1,1,0};

int main(){
	int i,j,t1,t2,t3,t4,n,m,k,ans=0;
	scanf("%d %d %d",&n,&m,&k);
	for(i=0;i<n;i++){
		scanf("%s",s1[i]);
	}
	t1=t2=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s1[i][j]=='.'){
				t2++;
				if(t1==0){
					t1=1;
					vis[i][j]=1;
					q.push(make_pair(i,j));
				}
			}
		}
	}
	k=t2-k;
	ans=1;
	while(!q.empty()){
		auto it=q.front();
		q.pop();
		for(i=0;i<4;i++){
			t1=it.first+dr[i];
			t2=it.second+dc[i];
			if(t1>=0 && t1<n && t2>=0 && t2<m){
				if(s1[t1][t2]=='.' && vis[t1][t2]!=1 && ans<k){
					ans++;
					vis[t1][t2]=1;
					q.push(make_pair(t1,t2));
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s1[i][j]=='.' && vis[i][j]==0){
				s1[i][j]='X';
			}
			printf("%c",s1[i][j]);
		}
		printf("\n");
	}
	return 0;
}