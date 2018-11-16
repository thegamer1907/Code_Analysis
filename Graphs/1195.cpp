#include<iostream>

using namespace::std;

int main(){
    int n,t;
    cin>>n>>t;
    t--;
    int ar[n];
    for(int i=0;i<n-1;i++){
        cin>>ar[i];
    }
    int i=0;
    while(i<n&&i<=t){
        if(i==t){
            cout<<"YES"<<'\n';
            return 0;
        }
        i+=ar[i];
    }
    cout<<"NO"<<'\n';
}
