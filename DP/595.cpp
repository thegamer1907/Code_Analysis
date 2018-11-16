#include<bits/stdc++.h>
typedef long long int ll;
#define vaibhavv06 ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl '\n'
#define pb push_back
#define pii pair <int,int>
#define F first
#define S second
#define int long long
#define go(i,a,n) for(int i=a;i<n;i++)
const ll MOD = (ll) 1e9 + 7;
using namespace std;

signed main(){
	vaibhavv06;
    string s;  cin>>s;
       int arr[s.length()+1]={0};
       int n=s.length();
       go(i,1,n+1) if(s[i-1]==s[i]) arr[i]=1;
       int sum[n+1]={0};
       //sum[0]=arr[0]; 
       sum[1]=arr[1]; 
       go(i,2,n+1)  sum[i]=sum[i-1]+arr[i];
       //go(i,0,n+1)  cout<<sum[i]<<" ";
       cout<<endl;
       int m;  cin>>m;
       while(m--){
           int l,r;  cin>>l>>r;
            cout<<sum[r-1]-sum[l-1]<<endl;
       }
}