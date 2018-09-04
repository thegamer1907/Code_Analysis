#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int k,p[5],d[5],e[5];

int func(ll int x){

    ll int cost=0;
    if((x*e[0]-d[0])*p[0]>0)
    cost=(x*e[0]-d[0])*p[0];
    if((x*e[1]-d[1])*p[1]>0)
    cost+=(x*e[1]-d[1])*p[1];
    if((x*e[2]-d[2])*p[2]>0)
    cost+=(x*e[2]-d[2])*p[2];
    if(k-cost<0)
        return 0;
    return 1;

}

int main(){

    ios_base::sync_with_stdio(0);

    ll int ans=0,i,j,l,r,mid;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
        if(s[i]=='S')
            e[0]++;
        else
            e[s[i]-'A']++;

    cin>>d[1]>>d[0]>>d[2];
    cin>>p[1]>>p[0]>>p[2];
    cin>>k;
    if(e[0]!=0)
        ans=d[0]/e[0];
    if(e[1]!=0)
        ans=min(ans,d[1]/e[1]);
    if(e[2]!=0)
        ans=min(ans,d[2]/e[2]);
    d[0]-=ans*e[0];
    d[1]-=ans*e[1];
    d[2]-=ans*e[2];
    l=0;
    r=1e14;
  //  cout<<d[0]<<" "<<d[1]<<" "<<d[2]<<endl;
    while(l<r-1){

        mid=(l+r)/2;
//        cout<<l<<mid<<r<<endl;

        if(func(mid))
            l=mid;
        else
            r=mid-1;
    }
    //cout<<l<<mid<<r<<endl;
    if(func(r))
        ans+=r;
    else if(func(mid))
        ans+=mid;
    else
        ans+=l;
    cout<<ans;
    return 0;
}
