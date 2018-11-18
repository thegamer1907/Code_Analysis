#include<bits/stdc++.h>
using namespace std;

#define LL long long

int arr[100009];
LL freq[100009];
LL dp[22][100009];
LL inf = (LL)(1e17);
LL curr;
int n;

void add(int i){
	if(freq[i]==0){freq[i]++;return ;}
	curr = curr - (freq[i]*(freq[i]-1))/2;
	freq[i]++;
	curr = curr + (freq[i]*(freq[i]-1))/2;
}

void del(int i){
	if(freq[i]==1){freq[i]=0;return ;}
	curr = curr - (freq[i]*(freq[i]-1))/2;
	freq[i]--;
	curr = curr + (freq[i]*(freq[i]-1))/2;
}

void addrange(int l,int r){
	for(int i=l;i<=r;i++){
		add(arr[i]);
		//cout<<curr<<" ";
	}
}

void delrange(int l,int r){
	for(int i=l;i<=r;i++){
		del(arr[i]);
	}
}

void f(int s,int e,int l,int r,int k){
	if(s>e){return ;}
	int m = (s+e)/2;
	delrange(m+1,e);
	//cout<<s<<","<<e<<endl;
	//cout<<"m ------ "<<m<<endl;
	//for(int i=1;i<=n;i++){cout<<freq[arr[i]]<<" ";}cout<<endl;
	//cout<<"starting curr = "<<curr<<endl;
	int x=l;
	for(int i=l;i<=min(m,r);i++){
	//	cout<<i<<","<<dp[k-1][i-1]<<","<<curr<<endl;
		if((dp[k-1][i-1] + curr) < dp[k][m]){dp[k][m] = dp[k-1][i-1] + curr;x=i;}
		delrange(i,i);
	}
	addrange(l,min(m,r));

	if(s==e){
		addrange(m+1,e);
	}else{
		delrange(m,m);
		f(s,m-1,l,x,k);
		addrange(m,e);

		delrange(l,x-1);
		f(m+1,e,x,r,k);
		addrange(l,x-1);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin>>n>>k;

	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<=k;i++){
		for(int j=0;j<=n;j++){dp[i][j] = inf;}
	}
	dp[0][0]=0;

	for(int i=1;i<=k;i++){
		curr=0;
		memset(freq,0,sizeof(freq));
		addrange(1,n);
		//cout<<endl;
		f(1,n,1,n,i);
	}
	cout<<dp[k][n]<<endl;
}