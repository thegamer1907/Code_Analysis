#include<bits/stdc++.h>
using namespace std;
int cnt_one(int arr[],int s,int e,int n){
    int one=0;
    for(int i=0;i<n;i++){
        //cout<<arr[i]<<endl;
        if(i>=s && i<=e &&s!=e){ 
            if(arr[i]==0) one++;
            }
        else if(arr[i]==1) one++;
        //cout<<arr[i]<<" " <<one<<endl;
    }
    return one;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=0;
    //cout<<cnt_one(arr,0,0,n)<<endl;
    int noone=0;
    for(int i=0;i<n;i++) if(arr[i]==1) noone++;
    if(n==noone) cout<<n-1<<endl;
    else if(n==1 && arr[0]==0) cout<<"1"<<endl;
    else {
        for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //cout<<i<<" "<<j<<" "<<"max1:"<<max1<<" cnt_one(arr,i,j,n): "<<cnt_one(arr,i,j,n)<<endl;
            max1=max(max1,cnt_one(arr,i,j,n));
        }
    }
    cout<<max1<<endl;
    }
}