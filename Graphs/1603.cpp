#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n+1];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        //cout<<arr[i]<<endl;
    }
    int a=0;
    for(int i=1;i<n;){
        i=i+arr[i];
        //cout<<a<<endl;
        if(i==t){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
