#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1000*1000*1000+7;
const int MX1= 500*1000+100;
const int MX2= 2*1000+100;
const ll inf=0x7FFFFFFFF;
ll n,s,ar[MX1];
ll b[MX1];
ll sum;
ll calc(ll k){
    //cout<<1<<endl;
    for(int i=0;i<n;i++){
        b[i]=ar[i]+k*(i+1);
    }
    sort(b,b+n);
    sum=0;
    for(int i=0;i<k;i++){
        sum+=b[i];
    }
    return sum;
}
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    ll fst=0,lst=n;
    ll mx=0;
    while(fst<lst){
        ll mid=(fst+lst+1)/2;
        ll tmp=calc(mid);
        if(tmp<=s){
            fst=mid;
            mx=tmp;
        }else{
            lst=mid-1;
        }
    }
    cout<<fst << " "<<mx<<endl;
}
