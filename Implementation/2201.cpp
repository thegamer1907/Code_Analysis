#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y,z,dx=0,dy=0,dz=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        dx+=x;
        cin>>y;
        dy+=y;
        cin>>z;
        dz+=z;
    }
    if(dx==0&&dy==0&&dz==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}