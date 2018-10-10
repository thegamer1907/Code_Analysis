#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,z,x,k,i,r=2e9+2e8;
    cin >> n;
    int a[n+1];
    for(z=1;z<=n;z++){
        cin >> a[z];
    }
    for(i=1;i<=n;i++){
        if(a[i]<i) k = 0;
        else k = (a[i]-i)/n + 1;
        if(r>i+k*n){
            r = i + k*n;
            x = i;
        }
    }
    cout << x;
}
