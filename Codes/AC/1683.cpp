#include<iostream>
using namespace std;
long long n,m,k;
long long cnt(long long a){
    long long ans=0;
    for(long long i=1;i<=n;i++){
        ans+=min(a/i,m);
    }
    return ans;
}
int main(){
    cin>>n>>m>>k;
    long long l=1,r=n*m;
    while(l<r){
        long long mid=(l+r)/2;
        //cout<<mid<<" "<<cnt(mid)<<endl;
        if(cnt(mid)<k){
            l=mid+1;
        }else{
            r=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}
