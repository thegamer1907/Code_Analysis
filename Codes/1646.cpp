#include<bits/stdc++.h>
using namespace std;
int n,m;
long long k;
bool check(long long x){
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+min((long long)m,x/i);
    }
    return sum>=k;
}
int main(){
    cin>>n>>m>>k;
    long long l=1;
    long long r=(long long)n*m;
    while(l<r){
        long long mi=(l+r)/2;
        if(!check(mi)){
            l=mi+1;
        }
        else{
            r=mi;
        }
    }
    cout<<l<<"\n";
    return 0;
}
