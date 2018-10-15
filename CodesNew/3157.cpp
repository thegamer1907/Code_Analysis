#include <bits/stdc++.h>
#define li long long int
#define MOD 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li n,k;
    cin>>n>>k;
    li arr[n+1];
    for(li i=1;i<=n;i++)
        cin>>arr[i];
    li ones[300005]={0};
    for(li i=1;i<=n;i++){
        if(arr[i]==1)
            ones[i]=ones[i-1]+1;
        else
            ones[i]=ones[i-1];
    }
    li low=1,high=n;
    li ans=0;
    li p;
    while(low<=high){
        li mid=(low+high)/2;
        li ptr=0;
        li pi;
        for(li i=mid;i<=n;i++){
            if(ones[i]-ones[i-mid]+k>=mid){
                ptr++;
                pi=i-mid+1;

            }
        }
        if(ptr>0){
            low=mid+1;
            p=pi;
            ans=mid;
        }
        else
            high=mid-1;
    }
    cout<<ans<<endl;
    li i=1;
    while(i<=n){
        if(i>=p&&i<p+ans)
            cout<<1<<" ";
        else
            cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;



}
