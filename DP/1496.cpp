#include<iostream>
using namespace std;int n,a,c,cp,mem,r=-1;
main(){
    cin>>n;
    while(n--)cin>>a,c+=a,cp+=1-a*2,r=max(r,cp-mem),mem=min(cp,mem);
    cout<<r+c;
}