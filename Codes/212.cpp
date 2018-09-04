#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100005],x,m;
    cin>>n>>x;
    a[0]=x;
    for(int i=1;i<n;i++){
        cin>>x;
        a[i]=a[i-1]+x;
    }
    cin>>m;
    while(m--){
        cin>>x;
        int lo=0,hi=n-1,mid;
        while(lo<hi){
            mid=(lo+hi)/2; //check
            if(x<=a[mid]) hi=mid;
            else lo=mid+1;
        }
        cout<<lo+1<<endl;
    }




}
