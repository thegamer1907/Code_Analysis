#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

ll N;

long long pro(ll x){
    ll y=0;
    ll M=N;
    while(M>0){
        y+=min(x, M);
        M-=min(x, M);
        M-=(M/10);
    }
    return y;
}

int main(){
    cin>>N;
    ll s=1, e=1000000000000000000LL;
    while(s<e){
        ll mid=(s+e)/2;
        if(pro(mid)*2>=N){
            e=mid;
        }
        else{
            s=mid+1;
        }
    }
    cout<<s;
    return 0;
}
