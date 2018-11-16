//submitted by Himj
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define fi first
#define se second
#define fr(i,s,e) for(i=s;i<e;i++)
#define ms(arr,val) memset(arr,val,sizeof(arr))
using namespace std;

const int mxn=1e5+1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
  int t=1;
  //cin>>t;
    while(t--){
      int n,k,i,ans=0,himj=0;
      cin>>n>>k;
      int arr[n];
      fr(i,0,n)
      cin>>arr[i];
      i=0;
     while(i<n)
      {
        if(arr[i]<=0)
          {
            i++;
            continue;
          }
          himj++;
        if(himj==k)
        {
          ans++;
          himj=arr[i];
          i++;
        //  cout<<ans<<" "<<himj<<" "<<i<<" "<<arr[i]<<" ";
          while(i<n&&arr[i]==himj)
          {
            i++;
            //cout<<i<<"\n";
            ans++;
          }
          cout<<ans;
          return 0;
        }
        ans++;
       i++;
      }
      cout<<ans;

    }
  return 0;
  }

