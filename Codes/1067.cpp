#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,d;
    cin>>n>>d;
    ll a,b;
    ll i,k;
    pair<ll,ll> p[n];
    for(i=0;i<n;i++){
        cin>>a>>b;
        p[i]=make_pair(a,b);
    }
    sort(p,p+n);
    ll sum=p[0].second;
    ll max=0;
    ll dif=0;
    i=0;k=0;
    while(i<n&&k<n){
        if(dif>=d){
            sum-=p[i].second;
            i++;
            if(i>=n)break;
            dif=p[k].first-p[i].first;
        }
        else{
            if(sum>max)max=sum;
            k++;
            if(k>=n)break;
            sum+=p[k].second;
            dif=p[k].first-p[i].first;
            continue;
        }
        //if(sum>max)max=sum;
        
    }
    
    cout<<max;
    
    return 0;
}