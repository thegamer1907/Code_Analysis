#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,n,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n-1;i++)
        cin>>a[i];
    for(i=0;i<n-1;){
        i=i+a[i];
        if(i==k-1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
        cout<<"NO"<<endl;
    return 0;
}
