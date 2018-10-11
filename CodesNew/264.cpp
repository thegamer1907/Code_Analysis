#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,n,m,a,b,x,y,z,s=0,t=0,ma=0;
    cin>>n>>m;
    long long arr[n+5];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        s+=arr[i];
        if(s>m){
            s-=arr[t];
            t++;
        }
        else{
            b=i-t+1;
            ma=max(ma,b);
        }
    }
    if(ma==0){
        cout<<0<<endl;
        return 0;
    }
    ma=max(ma,b);
    cout<<ma<<endl;
    return 0;
}