#include<bits/stdc++.h>
using namespace std;
int arr[30005],n,k,i;
int main(){
cin>>n>>k;n--;
for(i=1;i<=n;i++)cin>>arr[i];
for(i=1;i<=n;){if(i==k){cout<<"YES";return 0;}i+=arr[i];}
if(arr[n]+n==k)cout<<"YES";else cout<<"NO";
}