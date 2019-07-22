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
    
    for(auto &x:p)
      cin>>x;
    
    sort(p.begin(),p.end());
    
    int cnt = 0;
    
    int i=0;
    int x = 0;
  //  int ans = 0;
    
    while(i<m){
    	
    	int curr = ceil(double(p[i]-x)/k);
    	int j = i;
    	
    	while(j<m){
    		
    	   int temp = (p[j]-x)/k+((p[j]-x)%k!=0);
    	   if(temp!=curr)
		     break;
		   	 	
    	   j++;	
		}
		
	//	cout<<i<<' '<<j-i<<' '<<j<<endl;
		x+=j-i;
		i = j;
		
		cnt++;
    	
	}
    
    cout<<cnt;
     
    return 0;
    
}