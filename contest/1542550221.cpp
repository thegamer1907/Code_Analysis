#include <bits/stdc++.h>
using namespace std;

int mask[16];

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int z=0,b;
        for(int j=0;j<k;j++){
            cin>>b;
            z=(z<<1)|b;
        }
        mask[z]=1;
    }
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            if(i&j) continue;
            if(mask[i]&&mask[j]){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
