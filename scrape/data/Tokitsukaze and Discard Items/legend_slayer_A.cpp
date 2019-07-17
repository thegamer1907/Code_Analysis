#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int _=[](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
 
 ll rem(ll a, ll k)
 {
     if((a%k)==0)
        return (a/k) -1;
    return a/k;
 }

 
int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    
    vector<ll> v;
    
    for(int i=0;i<m;i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
   // sort(v.begin(),v.end());
   ll ans=0,count=0,sub_count=1,curr_part;
   curr_part = rem(v[0],k);
   for(int i=1;i<v.size();i++)
   {
       ll dum=rem(v[i]-count,k);
       if( dum == curr_part)
        sub_count++;
        else
        {
            count+=sub_count;
            sub_count=1;
            ans++;
            curr_part = rem(v[i]-count,k);
        }
        
        //cout<<curr_part<<" "<<count<<" "<<sub_count<<endl;
   }
   
   cout<<ans+1<<endl;
   
}