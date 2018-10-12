#include <bits/stdc++.h>

using namespace std;
int arr[500000]={0},n=0;
bool valid(int m){
int ans=n;
for(int i=n-1,j=n-m-1;i>=n-m&&j>=0;){
if(arr[i]>=arr[j]*2)ans--,i--,j--;
else i--;


}

return ans==m;

}
int main()
{

 int ans=INT_MAX;
 cin>>n;
 for(int i=0;i<n;i++)cin>>arr[i];
 sort(arr,arr+n);

 int l=1,r=n;
 while(l<=r){
    int mid=(l+r)/2;

    if(valid(mid))ans=min(ans,mid),r=mid-1;
    else l=mid+1;

 }


cout<<ans;

    return 0;
}
