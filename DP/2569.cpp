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
ll n,a,b,ans,i,j,p[111111],l;
vector<ll>v;
string s,s1;
int main () {
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>p[i];
		if(p[i]>p[i-1]) l++;
		else l=1;
		ans=max(ans,l);
	}
	cout<<ans;
}