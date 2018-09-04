#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define repd(i,a,b) for(ll i=a;i>=b;--i)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mit(m) for(map<ll,ll> :: iterator it=m.begin();it!=m.end();++it)
// #define mp make_pair
#define hell 1000000007
#define vvll vector<vector<ll> >
#define vll vector<ll>
#define int long long
#define sz (int)(1e5+5)

struct frnd{
    int m,f;
}a[sz];

bool cmp(struct frnd a,struct frnd b){
    return a.m<b.m;
}




signed main(){
    int n,d;
    cin>>n>>d;
    rep(i,0,n){
        cin>>a[i].m>>a[i].f;
    }
    sort(a,a+n,cmp);
    int i=0;
    int j=0;
    int sum=a[0].f;
    int ans=0;
    rep(k,1,n){
        if(a[k].m<a[i].m+d)
            {j=k;

                sum+=a[k].f;
                }
        else break;
    }
    ans=sum;
    sum-=a[0].f;
    rep(i,1,n){
        int bsd=j+1;
        rep(k,bsd,n){
            if(a[k].m<a[i].m+d)
            {
                j=k;
                sum+=a[k].f;
            }
            else break;

        }
        ans=max(sum,ans);
        sum-=a[i].f;
    }
    cout<<ans;


   


    
    
    


    
        
    
}
	


	

	





	
