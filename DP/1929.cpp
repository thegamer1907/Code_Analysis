#include <bits/stdc++.h>
using namespace std;

int n,q;
int v[100001];
int DP[100001];
int vis[100001];

int main(){
	scanf("%d %d",&n,&q);
	
	for(int i=0;i<n;i++)
		scanf("%d",&v[i]);
	
	int cont=0;
	for(int i=n-1;i>=0;i--){
		if(vis[v[i]]==0){
			cont++;
			vis[v[i]]=1;
			DP[i]=cont;
		}
		else DP[i]=cont;
	}
	
	for(int i=0;i<q;i++){
		int l;
		scanf("%d",&l);
		printf("%d\n",DP[l-1]);
	}
	return 0;
}
