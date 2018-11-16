#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
#define maxn 10005 
int n,m;
bool vis[maxn<<2];
struct node{
	int wz;
	int id;
};
bool mark=false;
void bfs(){
	queue<node> q;
	node st;
	st.wz=n;
	st.id=0;
	q.push(st);
	while(!q.empty()){
		node x=q.front();
		q.pop();
		if(mark)continue;
		if(x.wz==m){
			cout<<x.id<<endl;
//			return 0;
            mark=true;
		}
		vis[x.wz]=true;
		node now;
		if(x.wz>1){
			if(!vis[x.wz-1]){
				now.wz=x.wz-1;
				now.id=x.id+1;
				q.push(now);
			}
		}
		if(!vis[x.wz<<1] && (x.wz*2<m*2+100)){
			now.wz=x.wz<<1;
			now.id=x.id+1;
			q.push(now);
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	if(n>=m){
		cout<<n-m<<endl;
		return 0;
	}
	bfs();
} 