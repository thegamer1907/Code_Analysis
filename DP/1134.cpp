#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int n,x; cin>>n; 
    int arr[n],i=0,tsum=0;
    while(cin>>x){ 
        tsum+=x;
        arr[i++] = (x==1?-1:1); 
    } 
    if(tsum==n){ 
        cout<<n-1; 
        return 0;
    }
    int count=0,maxc=0,sum=0; 
    for(i=0;i<n;i++){  
        sum += arr[i]; 
        if(sum<0) sum=0; 
        maxc = max(maxc,sum);
    } 
    cout<<tsum+maxc; 
    return 0;
}
