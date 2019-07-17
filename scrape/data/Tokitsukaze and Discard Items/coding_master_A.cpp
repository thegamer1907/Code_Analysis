#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define int long long
#define ll long long
#define mp make_pair
#define ss second
#define pb push_back
#define ff first
#define um unordered_map
#define us unordered_set
#define pll pair<ll,ll>
#define large 100005
const int mod = 1e9+7;
#define PI 3.1415926535
ll powmod(ll base,ll exp,ll MOD){ll res=1;while(exp>0){if(exp%2==1) res=(res*base)%MOD;base=(base*base)%MOD;exp/=2;}return (res%MOD);}
 
int32_t main() {
   
    ios_base::sync_with_stdio(0); 
	cin.tie(0);
    cout.tie(0);
    
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<int> p(m);
    
    for(int i=0;i<m;i++)
      cin>>p[i];
      
    sort(p.begin(),p.end());
	
	int x = 0;
	int i = 0;
	int curr = 0;
	int cnt = 0;
	int alpha = 0;
	
	while(i<m){
		
		   int temp = ceil((long double)(p[i]-x)/k) ;
		
		if(temp!=curr){
			cnt++;
			x += alpha;
			curr = ceil((long double)(p[i]-x)/k) ;
			alpha = 1;
		}
		else
		   alpha++;
		
		i++;
	}  
     
	 
    cout<<cnt; 
     
    return 0;
    
}