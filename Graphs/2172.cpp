#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#define maxn 10000 
using namespace std;
int n,m;
int used[maxn+5];
struct node{
	int x;
	int d;
	node(){
		
	}
	node(int num,int tim){
		x=num;
		d=tim; 
	}
};
queue<node>q;
int bfs(){
	node now,nex;
	q.push(node(n,0));
	used[n]=1;
	while(!q.empty()){
		now=q.front();
		q.pop();
		if(now.x==m){
			return now.d;
		}
		nex.d=now.d+1;
		nex.x=now.x*2;
		if(nex.x>0&&nex.x<=maxn&&!used[nex.x]){
			q.push(nex);
			used[nex.x]=1;
		}
		nex.d=now.d+1;
		nex.x=now.x-1;
		if(nex.x>0&&nex.x<=maxn&&!used[nex.x]){
			q.push(nex);
			used[nex.x]=1;
		}
	}
}
int main(){
	scanf("%d %d",&n,&m);
	printf("%d\n",bfs());
} 