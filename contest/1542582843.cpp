#include<bits/stdc++.h>
#define ll  long long
#define MM 100000
#define MOD 100000007
#define sync ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

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
        ll n,m,i,j,x,mx=0,cnt=0,p=0;
        float a[3];
        cin>>a[0]>>a[1]>>a[2]>>n>>m;
        a[1]=a[1]+(a[2]/60.0);
        a[0]=a[0]+(a[1]/60.0);
        a[1]=a[1]/5.0;a[2]=a[2]/5.0;
        sort(a,a+3);
        //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        if(n>m)
            swap(n,m);
        if(n<=a[0]&&m<=a[0])p=1;
        if(n>=a[0]&&m<=a[1]) p=1;
        if(n>=a[1]&&m<=a[2]) p=1;
        if(n>=a[2]&&m>=a[2]) p=1;
        if(n<=a[0]&&m>=a[2]) p=1;
        if(p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
