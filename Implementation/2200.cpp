#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXX 1000000

int main(){
    int n,x=0,y=0,z=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        x=x+a[i][0];
        y=y+a[i][1];
        z=z+a[i][2];
    }
    if(x==0 && y==0 && z==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
