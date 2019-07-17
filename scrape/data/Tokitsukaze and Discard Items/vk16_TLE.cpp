#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long arr[m+1],i,j,a,d;
    for(i=1;i<=m;i++){
        cin>>arr[i];
    }
    long long count = 0;
    i = arr[1]/k;
    //cout<<i<<endl;
    if(arr[1]%k==0)
    i--;
    i = k*i+1;
    //cout<<i<<endl;
    a = 1;
    j = i+k-1;
    //cout<<j<<endl;
    while(a<=m){
        bool f = 0;
        d=0;
        while(arr[a]<=j&&a<=m){
            a++;
            d++;
            f=1;
        }
        if(f){
            count++;
        }
        if(d>0){
            j+=d;
            j = min(j,n);
        }
        else{
            j+=k;
            j = min(j,n);
        }
        
        //cout<<j<<endl;
    }
    cout<<count<<endl;
    return 0;
}