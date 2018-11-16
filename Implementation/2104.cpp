#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,z,i,j,cnt=0,l1=0,l2=0,l3=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x>>y>>z;
        l1=l1+x;
        l2=l2+y;
        l3=l3+z;
    }
    if(l1==0&&l2==0&&l3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
