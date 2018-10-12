#include<bits/stdc++.h>
using namespace std;
typedef long long int llint;
const int MAXN=200010;
int n,q,dead;
int a[MAXN];
llint k,p;
vector<llint>s(MAXN);
int main(){
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(!i) s[i]=a[i];
		else s[i]=s[i-1]+a[i];
	}
	s[n]=1e18;
	for(int i=0;i<q;i++){
		cin>>k;
		int lo=0,hi=n,mid;
		while(lo<hi){
			mid=(lo+hi)/2;
			if(s[mid]-p<=k) lo=mid+1;
			else hi=mid;
		}
		p+=k;
		dead=lo;
		if(dead==n){
			dead=0;
			p=0;
		}
		cout<<n-dead<<"\n";
	}
	return 0;
}
