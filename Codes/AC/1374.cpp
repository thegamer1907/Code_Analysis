#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
using namespace std;
long long n,t,a[100001],b[100001];
long long func(int k){
	long long s=0,i,j;
	for(i=1;i<=n;i++){
		b[i]=a[i]+i*k;
	}
	sort(b+1,b+n+1);
	for(i=1;i<=k;i++){
		s+=b[i];
		if(s>t){
			s=-1;
			break;
		}
	}
	return s;
}
int main(){
	int i;
	cin>>n>>t;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	long long p;
	int m,l=0,r=n+1;
	while(l!=r-1){
		m=(l+r)/2;
		p=func(m);
		if(p!=-1){
			l=m;
		} else {
			r=m;
		}
	}
	cout<<l<<" "<<func(l);
}