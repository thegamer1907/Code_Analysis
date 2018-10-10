#include <bits/stdc++.h>
using namespace std;
long long n , m , k;
long long lowerThan(long long x){
    long long ans=0;
    for(int i=1;i<=n;i++){
        ans+=min(m,(x)/i);
    }
    return ans;
}
long long solve(){
    long long s =0  , e = 1e17 , r=-1;
    while(s<=e){
        long long m = (s+e)/2;
        if(lowerThan(m)>=k){
            r = m;
            e = m-1;
        }
        else {
            s = m+1;
        }
    }
    return r;
}

int main()
{
    cin>>n>>m>>k;
//    cout<<lowerThan(0)<<endl;
//    cout<<lowerThan(1)<<endl;
//    cout<<lowerThan(2)<<endl;
//    cout<<lowerThan(3)<<endl;
    cout<<solve()<<endl;
}