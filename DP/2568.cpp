#include<bits/stdc++.h>
using namespace std;
int v[200005];
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>v[i];
    int cant=0;
    int maxi=0;
    int act=0;

    for(int i=0;i<N;i++){
        if(v[i]>act){
            cant++;
            act=v[i];
        }
        else {
            maxi=max(maxi,cant);
            act=v[i];
            cant=1;
        }
    }
    maxi=max(maxi,cant);
    cout<<maxi;
    return 0;
}
