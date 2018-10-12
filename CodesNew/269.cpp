#include <iostream>

using namespace std;
int arr[100001];
int main()
{
int n,t;
cin>>n>>t;
for(int i=0;i<n;i++){
cin>>arr[i];

}
int ans=0;
int sum=arr[0];
int l=0,r=0;
while(l<=n-1&&r<=n-1){
   if(sum<=t){
    ans=max(ans,(r-l+1));
r++;
sum+=arr[r];


}
if(sum>t){
sum-=arr[l];
l++;

}


}
cout<<ans;
    return 0;
}
