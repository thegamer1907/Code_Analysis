#include <iostream>
using namespace std;
#define ll long long 
ll n;
ll com;
ll f(ll st, ll end){
    if(st>end) return -1;
    ll k=(st+end)/2;
    ll t=n;
    ll l=0;
    while(true){
        if(t<=k){
             break;
        }
        t=((t-k)-(t-k)/10);
        l++;
    }
    if(l*k+t>=com){
        ll lans=f(st,k-1);
        if(lans==-1) return k;
        else return lans;
    }
    else return f(k+1,end);
}
int main() {
    cin>>n;
    com=n/2;
    if(n%2!=0) com++;
    cout<<f(1,n);
   /* ll k=f(1,n);
     ll t=n;
    ll l=0;
    while(true){
        if(t<=k){
            cout<<t<<" ";
            t=0; l++; break;
        }
        t=((t-k)-(t-k)/10);
        l++;
        cout<<t<<" ";
    }
    cout<<endl<<endl;
    */
}
