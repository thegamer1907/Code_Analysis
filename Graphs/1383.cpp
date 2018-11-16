#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
const int N =1 << 20;
std::vector< int> v[N];
ll ar[N],z;
bool vis[N];
void dfs(int s){
    vis[s]=1;
    ar[z]=s;
    z++;
    for(int i =0;i<v[s].size();i++)
    {
        if(!vis[v[s][i]])dfs(v[s][i]);
    }
}
int main(){
    fast;
	ll n;
	cin>>n;
	ll k ;
	cin>>k;
	for(int i =1;i<n;i++){
	    ll x;
	    cin>>x;
	    v[i].push_back(i+x);
	}
	dfs(1);
	for(int i =0 ;i <z;i++){
	    if(k==ar[i])return cout<<"YES", 0;
	}
	cout<<"NO";
}