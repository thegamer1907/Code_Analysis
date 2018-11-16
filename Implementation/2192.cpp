// mital21  //
#include<bits/stdc++.h>
#define ll          long long int
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005;
int main()
{ 
    ll n,i,x=0,y=0,z=0,a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        x+=a;y+=b;z+=c;
    }
    if(x!=0||y!=0||z!=0)
        cout<<"NO";
    else
        cout<<"YES";
    


    



    

    
return 0;
}
