#include <bits/stdc++.h>
#define li long long int
#define MOD 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li n;
    cin>>n;
    li arr[n];
    for(li i=0;i<n;i++)
        cin>>arr[i];
    li low=0;
    li high=1e10;
    li ans=0;
    while(low<=high){
        li mid=(low+high)/2;
        li ptr=-1;
        for(li i=0;i<n;i++){
            li d=arr[i]-(mid*n);
            d-=i;
            if(d<=0){
                ptr=1;
                ans=i+1;
                break;
            }
        }
        if(ptr>0){
            high=mid-1;
        }
        else
            low=mid+1;

    }
    cout<<ans<<endl;



}
