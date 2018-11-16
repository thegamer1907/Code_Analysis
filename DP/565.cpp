#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin>>x;
    int n=x.length();
    int arr[n];
    fill(arr,arr+n,0);
    for(int i=0;i<n-1;i++){
        if(x[i]==x[i+1])
            arr[i]=1;
    }
    int sum[n];
    sum[0]=arr[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        //cout<<sum[i]<<" ";
    }
    
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int r=sum[b-1]-sum[a-1];
         if(a-1>+0){
            if(arr[b-1]==1){
            cout<<sum[b-1]-sum[a-2]-1<<endl;
            }else{
            cout<<sum[b-1]-sum[a-2]<<endl;
            }
        }else{
            if(arr[b-1]==1){
            cout<<sum[b-1]-1<<endl;
            }else{
            cout<<sum[b-1]<<endl;
            }
        }
        
    }
    
    return 0;
}