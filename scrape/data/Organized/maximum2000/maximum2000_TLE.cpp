#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;

int main(){
      ios_base::sync_with_stdio(false);
        cin.tie(NULL);
   cout.tie(NULL);

ll n,m,k;
cin>>n>>m>>k;
vector<ll> s(m);
for(ll i=0;i<m;++i)
{ll tmp;cin>>tmp;
    s[i] = tmp;

}
ll ans=0,t=k,co=0;
 if(s[0]%k!=0)t=((s[0]/k)+1)*k;
 else t=s[0];
    for(ll i=0;i<m;){
  //  cout<<t<<"H";
        if(s[i]<=t){co++;++i;}
        else {

            if(co==0) {ll pos= s[i]-i;
                    if(pos%k!=0) t=((pos/k)+1)*k;
                    else t=s[i];
            }
             else {   t+=co;ans++;co=0;

             }
        }


    }
    if(co>0) ans++;
    cout<<ans;




return 0;}