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
	ll x=0,y=0,ans=0;
	while(x<=n){
		x+=k;
		int z=0;
		while(a[y]<=x&&y<m){
			z++;
			y++;
		}
		if(z){
			ans++;
			x+=z;
		}
		else continue;
		while(a[y]<=x&&y<m){
			z=0;
			while(a[y]<=x&&y<m){
				z++;
				y++;
			}
			if(z){
				ans++;
				x+=z;
			}
		}
	}
	printf("%I64d",ans);
	return 0;
}