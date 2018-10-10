
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define mp make_pair
#define pb push_back
#define N 10000010
int prime[N],sn[N],ct[N];
void sieve(){
	
	for(int i=2;i<N;i++){
		if(!prime[i]){
			for(int j=2*i;j<N;j+=i){
				if(!prime[j]){
					prime[j]=1;
					sn[j]=i;
				}
			}
		}
	}

	for(int i=2;i<N;i++){
		if(!sn[i])sn[i]=i;
	}

}
void factorise(int x){
	int cur=sn[x];
	int n=x;
	while(x>1){
		ct[cur]++;
		while(sn[x]==cur){
			x=x/sn[x];
		}
		cur=sn[x];
	}
}

int main(){
	ios::sync_with_stdio(false);
	sieve();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		factorise(a);
	}
	for(int i=1;i<N;i++)ct[i] += ct[i-1];
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		l = min(N-1,l);
		r = min(N-1,r);
		cout<<ct[r] - ct[l-1]<<'\n';
	}
}