#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int a[n+1],i;
	for(i=1;i<n;i++)
		cin>>a[i];
	//vector<int> adj[n+1];
	int x=1,flag=0;
	if(t==1){
		cout<<"YES"<<endl;
		return 0;
	}
	while(x<n){
		int y=x+a[x];
	//	cout<<y<<endl;
		if(y==t){
			flag=1;
			break;
		}
		x=y;
	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
