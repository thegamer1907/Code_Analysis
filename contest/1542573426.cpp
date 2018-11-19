#include<bits/stdc++.h>
#define ll  long long
#define MM 100000
#define MOD 100000007
#define sync ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll fsub(ll b[],ll k, ll n)
{
    ll i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if((i&j)==0&&(b[i]&&b[j]))
            return 1;
    }
    return 0;
}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    sync
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--)
    {
        ll n,m,i,j,k,x,mx=0,cnt=0,p=1;
        cin>>n>>k;
        ll a[n][k];
        ll b[16];
        memset(b,0,sizeof(b));
        for(i=0;i<n;i++){
                x=0;
            for(j=0;j<k;j++){
                cin>>a[i][j];
                if(a[i][j])
                    x+=(1<<(k-1-j));
            }
            b[x]++;
            //cout<<"x="<<x<<endl;
        }
        ll nn=pow(2,k);
       /* for(i=0;i<nn;i++){
            cout<<"i="<<i<<" bi="<<b[i]<<endl;
        }//*/
        if(fsub(b,k,nn)==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
