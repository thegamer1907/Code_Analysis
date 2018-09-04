#include<iostream>
#include<algorithm>
using namespace std;
long long k,n;
bool check(long long ki){
    long long cks=n;
    long long sum=0;
    while(cks>0){
        if(cks<k){sum+=cks;cks=0;}
        else {sum+=ki;cks-=ki;}
        cks-=cks/10;
    }
    if(sum*2>=n){
        //cout<<"hi"<<endl;
        return 1;
    }
    return 0;
}
int main(){
    cin>>n;
    //if(n<43){cout<<1<<endl;return 0;}
    long long l=0,r=n;
    while(l!=r-1){
        k=(l+r)/2;
        if(check(k)){
            r=k;
        }
        else{
            l=k;
        }
    }
    cout<<r<<endl;
}