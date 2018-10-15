#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false)
#define ll long long int
#define for1 for(int i=0;i<n;i++)
#define defv vector<int>
#define defvi vector<int> :: iterator
#define defs set<int>
#define defsi set<int> :: iterator
#define defm map<int,int>
#define defmi map<int,int> :: iterator
#define defp pair<int,int> 
#define defpi pair<int,int> :: iterator
int main()
{
	speed;
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif	    	
  	ll n,q;
  	cin>>n>>q;
  	ll arr[n];
  	vector<ll> prefix(n);
  	for(ll i=0;i<n;i++){
  		cin>>arr[i];
  		if(i ==0){
  			prefix[i] = arr[i];
  		}
  		else{
  			prefix[i] = prefix[i-1]+arr[i];
  		}
  		//bcout<<prefix[i]<<" ";
  	}
  	ll k[q];
  	for(ll i=0;i<q;i++){
  		cin>>k[i];
  	}
  	ll K;
  	ll kill = 0;
  	ll index;
  	for(ll i=0;i<q;i++){
  		kill = kill+k[i];
  		index = upper_bound(prefix.begin(),prefix.end(),kill)-prefix.begin();
  		if(index>=n){
  			kill = 0;
  			cout<<n<<endl;
  		}
  		else{
  			cout<<n-index<<endl;
  		}
  	}
	return 0;
 	}  
