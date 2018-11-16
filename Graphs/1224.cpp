#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t; cin>>n>>t; int count =1; int arr[n+1];
  for(int i=1;i<n;i++) cin>>arr[i];
  for(int i=1;i<n;)
  {
    if(count==t){cout<<"YES"; return 0;}
    else if(count>t){cout<<"NO"; return 0;}
    count+=arr[i];
    i+=arr[i];
    //cout<<count<<endl;
  }
  if(count==t) cout<<"YES";
  else cout<<"NO";

}
