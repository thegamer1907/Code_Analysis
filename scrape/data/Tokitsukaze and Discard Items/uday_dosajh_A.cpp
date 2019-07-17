#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long arr[m];
    for(long long i=0; i<m; i++)cin>>arr[i];
    long long end = k;
    long long ans =0;
    long long delitem=0;
    for(long long i=0; i<m; i++){
        if(arr[i]<=end){
            delitem++;
        }
        else if (delitem){
            ans++;
            i--;
            end+=delitem;
            delitem=0;
        }
        else{
            long long n = (arr[i]-end)/k;
            if((arr[i]-end)%k)n++;
            end = end+n*k;
            i--;
        }
    }
    if(delitem)ans++;
    cout<<ans;
    cout<<endl;
    }