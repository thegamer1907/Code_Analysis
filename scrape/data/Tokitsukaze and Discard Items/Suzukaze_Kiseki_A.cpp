#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100010];
int main(){
	ll n,m,k;
	scanf("%I64d %I64d %I64d",&n,&m,&k);
	for(int i=0;i<m;i++){
		scanf("%I64d",&a[i]);
	}
	ll x=k,y=0,ans=0;
	while(y<m){
		int z=0;
		while(a[y]<=x&&y<m){
			z++;
			y++;
		}
		if(z){
			ans++;
			x+=z;
			//printf("%I64d\n",x);
		}
		while(a[y]<=x&&y<m){
			z=0;
			while(a[y]<=x&&y<m){
				z++;
				y++;
			}
			if(z){
				ans++;
				x+=z;
				//printf("%I64d\n",x);
			}
		}
		if(y==m) break;
		ll d=(a[y]-x)/k;
		x+=d*k;
		if(x<a[y]) x+=k;
		//printf("%I64d\n",x);
	}
	printf("%I64d",ans);
	return 0;
}