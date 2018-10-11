#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define pop pop_back 
const int M=1e5+1;
int n,k,arr[M];
int main(){
	//std::ios_base::sync_with_stdio(0); cin.tie(NULL);
      // freopen("input.txt","r",stdin);
     cin>>n>>k;
     for (int i = 0; i < n; ++i)
     {
     	cin>>arr[i];
     }
     int l=0,r=0,sum=arr[0],ans=0;
     while(r<n && l<n){
     	if(l>r){
     		r++;
     		sum+=arr[r];
     		continue;
     	}
         if(sum<=k){
           ans=max(r-l+1,ans);
           r++;
           sum+=arr[r];
         }
         else{
         	sum-=arr[l];
         	l++;
         }
     }
        cout<<ans;
	return 0;
}
