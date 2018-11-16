#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,x,y,z,p=0,q=0,s=0,i;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>x>>y>>z;
        s=s+x;
        p=p+y;
        q=q+z;
    }
    if(s==0&&q==0&&p==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
