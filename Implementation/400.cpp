#include<iostream>
using namespace std;
int main(){
    int cn=0,i,k,n,ar[51];
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        if(ar[k-1]<=ar[i]&&ar[i]>0){
            cn++;
        }
    }
    cout<<cn<<endl;
    return 0;
}

