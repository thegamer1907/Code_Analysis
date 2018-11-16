
 #include <bits/stdc++.h> 
using namespace std; 
  #define ll long long
ll MAX = 10000000006; 

#define ios  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
   ll n;
   cin>>n;
   char cpre;
   cin>>cpre;
   ll ans=0;
   for(ll i=1;i<n;i++)
   {
       char c;
       cin>>c;
       if(c==cpre)
       ans++;
       else
       cpre=c;
   }
   cout<<ans;
   
	return 0;
}
