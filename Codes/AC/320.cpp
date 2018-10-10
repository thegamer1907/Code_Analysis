#include<bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
#include<queue>
#include<string.h>
#include<iostream>
#include<math.h>
#include<set>
#include<map>
#include<vector>
#include<iomanip>
using namespace std;
#define ll long long
#define pb push_back
#define FOR(a) for(int i=1;i<=a;i++)
const int inf=0x3f3f3f3f;
const int maxn=1e6+9; 

int arr[maxn];
int sum[maxn];
int main(){
	int n;
	scanf("%d",&n);
	FOR(n){scanf("%d",&arr[i]);sum[i]=sum[i-1]+arr[i];}
	int q;scanf("%d",&q);
	int id;
	FOR(q){
		scanf("%d",&id);
		int l=1,r=n;
		int ans;
		while(r>=l){

			int m=l+r>>1;
			if(id<=sum[m]){
				r=m-1;
				ans=m;
			}else if(id>sum[m]){
				l=m+1;
			}
		}
		printf("%d\n",ans);
	}
}