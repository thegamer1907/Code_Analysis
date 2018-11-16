
 #include <bits/stdc++.h> 
using namespace std; 
  #define ll long long
ll MAX = 10000000006; 

#define ios  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
   ll n,t;
   cin>>n>>t;
   char arr[n];
   for(ll i=0;i<n;i++)
   {
       cin>>arr[i];
   }
  while(t)
  {
      for(ll i=0;i<n-1;i++)
      {
          if(arr[i]=='B'&&arr[i+1]=='G')
          {
              arr[i]='G';
              arr[i+1]='B';
              i++;
          }
      }
      t--;
  }
  for(ll i=0;i<n;i++)
   {
       cout<<arr[i];
   }
  
   
	return 0;
}
