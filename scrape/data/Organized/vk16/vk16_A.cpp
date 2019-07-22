#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long arr[m+1],i,j,a,d=0,count=1,x=0;
    for(i=1;i<=m;i++){
        cin>>arr[i];
        arr[i]-=1;
    }
    
    i = arr[1]/k;
        
    i = k*i;
    j = i+k-1;
    
    for(a = 1;a<=m;a++){
        if(arr[a]<=j){
            continue;
        }
        else{
            count++;
            j = arr[a] + k -1 - (arr[a]-a+1)%k;
            a--;
        }
        
    }
    
    cout<<count<<endl;
    return 0;
}