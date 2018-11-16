#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,x,y,z,s=0,p=0,q=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y>>z;
        s=s+x;
        p=p+y;
        q=q+z;
    }
    if(p==0&&q==0&&s==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
