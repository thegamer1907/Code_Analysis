//Garvit Gupta
//MNNIT Allahabad
//gg_14
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define inf 1000000009
#define infl 100000000000000000
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
int MAX=10000003;
int a[1000005];
int prime[10000005];
int has[10000005];
int phas[10000005];
ll cumu[10000005];
void seive(){
	prime[0]=prime[1]=1;
	for(int i=2;i<=MAX;i++){
		if(prime[i]==0){
			if(has[i])
				phas[i]+=has[i];
			for(int j=2*i;j<=MAX;j+=i){
				if(has[j])
					phas[i]+=has[j];
				prime[j]=1;
			}
		}
	}
}
int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		has[a[i]]++;
	seive();
	cumu[0]=phas[0];
	for(int i=1;i<=MAX;i++)
		cumu[i]=phas[i]+cumu[i-1];

	// for(int i=0;i<=15;i++)
	// 	printf("%d ",has[i]);
	// printf("\n");

	// for(int i=0;i<=15;i++)
	// 	printf("%d ",phas[i]);
	// printf("\n");

	// for(int i=0;i<=15;i++)
	// 	printf("%lld ",cumu[i]);
	// printf("\n");

	scanf("%d",&m);
	int l,r;
	for(int i=0;i<m;i++){
		scanf("%d%d",&l,&r);
		if(l>MAX){
			printf("0\n");
			continue;
		}
		if(r>MAX)
			r=MAX;
		printf("%lld\n",cumu[r]-cumu[l]+phas[l]);
	}
	return 0;
}