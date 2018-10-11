#include<bits/stdc++.h>
using namespace std;
long long f(long long n,long long a){
    long long t=0;
    while(n>0){
        if(n>=a){
            t+=a;
            n-=a;
        }
        else{
            t+=n;
            n=0;
        }
        n-=(n/10);
    }
    return t;
}
int main(){
    long long n;
    cin>>n;
    long long x=0,y=n;
    while(y-x>1){
        long long med=(x+y)/2;
        long long d=f(n,med);
        if(d>=n-d){
            y=med;
        }
        else{
            x=med;
        }
    }
    cout<<y<<endl;
}
