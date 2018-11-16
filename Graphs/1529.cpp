#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	int x[n];
	pair<int,int> p[n];
	p[0].first=1;
	p[0].second=0;
	for(int i=1;i<n;i++){
		cin>>x[i];
		p[i].first=x[i];
		p[i].second=i;
	}
	int ans=0;
	int c=n;
	while(1){
		ans=p[ans].first+p[ans].second;
		if(ans==t){
			cout<<"YES";
			exit(0);
		}
		if(ans>n-1){
			cout<<"NO";
			exit(0);
		}
	}
}
