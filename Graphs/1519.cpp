#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define pb push_back
#define mp make_pair

int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	int arr[n-1];
	for(int i=0;i<n-1;i++){
		scanf("%d",&arr[i]);
	}
	int vis[n-1];
	memset(vis,0,sizeof(vis));
	int i=0;
	while(i<n-1){
		vis[i]=1;
		if(i+arr[i]<n-1){
		i=(i+arr[i]);	
		}
		else{
			break;
		}
		
	}
	if(vis[t-1]==1 ||t>=n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}