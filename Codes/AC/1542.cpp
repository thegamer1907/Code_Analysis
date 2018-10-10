#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",arr+i);
    long long start=0,end=n,ans=0;
    while(start<end){
        long long mid=(start+end+1)>>1 , num[n];
        for(int i=0;i<n;i++) num[i]=arr[i]+(i+1)*mid;
        sort(num,num+n);
        long long cost=0;
        for(int i=0;i<mid;i++)cost+=num[i];
        if(cost>k)end=mid-1;
        else if(cost<=k)start=mid,ans=cost;
    }cout<<start<<" "<<ans<<"\n";
    return 0;
}
