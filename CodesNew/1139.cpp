#include<iostream>
#include<stack>


using namespace std;

typedef long long ll;


int main() {
    ll n;
    while(cin>>n) {
        ll l=1,r=n,as=0,mid;
        while(l<=r) {
            ll t=n,ans=0;
            mid =(r-l>>1)+l;
           // cout<<(r-l>>1)+l<<endl;
            while(t>0) {
                ll p=t>=mid?mid:t;
                t-=mid;
                t-=t/10;
                ans+=p;
            //cout<<"ss"<<endl;
            }
            if(ans*2>=n){
                as=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        cout<<as<<endl;
    }
    return 0;
}