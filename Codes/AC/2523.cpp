#include <bits/stdc++.h>
using namespace std;
const int MAX = 10000010;
int n,x,m,l,r,countt[MAX],pre[MAX];
bool numbers[MAX]={};
vector <int> primes;
int main(){
	memset(numbers,1,sizeof numbers);
	scanf("%d",&n);
	for (int i=2;i<=MAX;i++){
		if (numbers[i]==true){
			primes.push_back(i);
			for (int j=i+i;j<=MAX;j+=i){
				numbers[j]=false;
			}
		}
	}
	for (int i=0;i<n;i++){
		scanf("%d",&x);
		countt[x]++;
	}
	for (int i=0;i<primes.size();i++){
		int tmp=0;
		for (int j=primes[i];j<=MAX;j+=primes[i]){
			tmp+=countt[j];
		}
		pre[primes[i]]=tmp;
	}
	pre[0]=pre[1]=0;
	for (int i=2;i<MAX;i++){
		pre[i]=(pre[i])?pre[i]+pre[i-1]:pre[i-1];
	}
	scanf("%d",&m);
	for (int i=0;i<m;i++){
		scanf("%d%d",&l,&r);
		r=min(r,MAX-1);
		l=min(l,MAX-1);
		cout<<pre[r]-pre[l-1]<<"\n";
	}
	return 0;
}