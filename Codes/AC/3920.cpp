/*****Enigma_27*****/

#include<bits/stdc++.h>
#define	MIN(a,b,c)	min(min(a,b),c)
#define	MAX(a,b,c)	max(max(a,b),c)
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        10000000000000000
#define endl        '\n'
#define rep(i,a,b)	for( i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll i,j,k,B,S,C,b,s,c,n,r,rate=0,ans=0,bb=0,ss=0,cc=0;
string st;
bool check(ll mid)
{
    ll x,y,z;
    x=max(mid*bb-B,0LL),y=max(mid*ss-S,0LL),z=max(mid*cc-C,0LL);
    return r>=x*b+y*s+z*c;
}
int main()
{
    cin>>st;
    cin>>B>>S>>C>>b>>s>>c>>r;
    for(i=0;i<st.size();i++)
        {
            if(st[i]=='B') bb++;
            else if(st[i]=='S') ss++;
            else cc++;
        }

   ll low=0,high=1e12+200,mid=(low+high)/2;
    while(high-low>1)
        {
            if(check(mid)) low=mid;
            else high=mid;
            mid=(low+high)/2;
        }
    if(check(high)) cout<<high<<endl;
    else cout<<low<<endl;
    return 0;

}
