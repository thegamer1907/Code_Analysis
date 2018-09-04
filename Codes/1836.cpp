#include<bits/stdc++.h>
using namespace std;
long long n,m,k;
long long kth(long long x){
    long long re=0;
    for(int i=1;i<=n;i++){
        re+=min(m,x/i);
    }
    return re;
}
long long bina(){
    long long l=1,r=n*m;
    while(l!=r){
        long long m=(l+r)/2;
        if(kth(m)>=k){
            r=m;
        }
        else l=m+1;
    }
    return l;
}
int main(){
    cin>>n>>m>>k;
    if(n>m)swap(n,m);
    cout<<bina()<<endl;
  //  long long t;
//	while(cin>>t)cout<<kth(t)<<endl;
    return 0;
}