#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int a[N];
int main(){ 
//	freopen("queue.in","r",stdin);
//	freopen("queue.out","w",stdout);
	ios::sync_with_stdio(0);
	int n,mn=INT_MAX; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mn=min(a[i],mn);
	}
	for(int i=1;i<=n;i++)
		a[i]-=mn;
	int t=mn%n+1;
	for(int i=0;;i++){
		if(a[t]-i<=0){
			cout<<t<<"\n";
			return 0;
		}
		t=t%n+1;
	}
	return 0;
}
