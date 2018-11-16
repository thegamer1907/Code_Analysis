#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pub push_back
#define pob pop_back
#define pq priority_queue
#define ext exit(0)
#define ff first
#define ss second
ll n,a[1111111],c[1111111],b[1111111],i,ans,k;
int main () {
	cin>>n>>k;
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=n;i>0;i--){
		if(!c[a[i]])b[i]=b[i+1]+1;
		else b[i]=b[i+1];
		c[a[i]]++;
	}
	while(k--){
		cin>>ans;
		cout<<b[ans]<<"\n";
	}
}