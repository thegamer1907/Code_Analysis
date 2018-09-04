#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll m,n,k,lo,hi,mid,c;
    cin>>n>>m>>k;
    hi=m*n;lo=1;
    while(lo!=hi){
        mid=(hi+lo+1)/2;
        c=0;
        for(int i=1;i<=n;i++){
            c+=min((mid-1)/i,m);
        }
        if(c>=k)hi=mid-1;
        else lo=mid;
    }
    printf("%lld",lo);
    return 0;
}