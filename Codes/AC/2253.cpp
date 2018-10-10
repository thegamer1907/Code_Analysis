#include<bits/stdc++.h>
using namespace std;
bool isprime[10000005];
vector<int>lis;
int cnt[10000005];
vector<int>memo[10000005];
void sieve(){
	for (int i=2;i<10000005;i++){
		if (isprime[i]==0){
			lis.push_back(i);
			for (int j=i*2;j<10000005;j+=i){
				isprime[j]=1;
			}
		}
	}
}
int main(){
	lis.push_back(1);
	sieve();
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		int prev=a;
		if (memo[prev].size()>0){
			for (int j=0;j<memo[prev].size();j++){
				cnt[memo[prev][j]]++;
			}
			continue;
		}
		for (int j=1;j<lis.size()&&a>1;j++){
			int yes=0;
			while (a>1&&a%lis[j]==0){
				yes=1;
				a/=lis[j];
			}
			cnt[lis[j]]+=yes;
			if (yes>0){
				memo[prev].push_back(lis[j]);
			}
			if (a==1)break;
			if (a<10000005){
				if (isprime[a]==0){
					cnt[a]++;
					memo[prev].push_back(a);
					break;
				}
			}
		}
	}
	for (int i=1;i<10000005;i++){
		cnt[i]+=cnt[i-1];
	}
	int q;
	scanf("%d",&q);
	while (q--){
		int ql,qr;
		scanf("%d%d",&ql,&qr);
		qr=min(qr,10000004);
		ql=min(ql,10000005);
		printf ("%d\n",cnt[qr]-cnt[ql-1]);
	}
}