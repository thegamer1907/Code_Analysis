#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long int ll;


int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; 
    cin>>n;
    ll a[n],cnt[n], S = 0;
        
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            cnt[i] = 1;
        }else{
            cnt[i] = -1;
            ++S;
        }
    }
    
    ll ans = cnt[0], aux = cnt[0];
    
    for(int i=1;i<n;i++){
        aux = max(cnt[i],aux+cnt[i]);
        ans = max(ans,aux);
    }
    
    cout<<S+ans<<"\n";
    
	return 0;
}