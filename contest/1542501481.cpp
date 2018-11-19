#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    ll n,k,x,i,j,t,lim;
    cin>>n>>k;
    lim=pow(2,k);
    ll a[lim];
    for(i=0;i<lim;i++)
        a[i]=0;
    for(i=0;i<n;i++) {
        x=0;
        for(j=0;j<k;j++) {
            cin>>t;
            x+=(t*pow(2,k-1-j));    
        }
        a[x]++;
    }
    vector <ll> v;
    for(i=0;i<lim;i++) {
        if(a[i]!=0)
            v.push_back(i);
    }
    k=v.size();
    ll f=0; //assuming team cannot be formed
    if(k==1 && v[0]==0)
        f=1;
    for(i=0;i<k;i++) {
        for(j=i+1;j<k;j++) {
            if((v[i]^v[j])==(v[i]+v[j])) { //bit manipulation
                f=1;
                break;
            }
        }
    }
    (f==1)?cout<<"YES\n":cout<<"NO\n";
    return 0;
}