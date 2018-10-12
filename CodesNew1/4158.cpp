#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> s;

int main(){
   ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
ll n,q;
cin>>n>>q;

ll a[n],k[q];
cin>>a[0];
s.push_back(a[0]);
s[0]=a[0];

for(int i=1;i<n;i++){
cin>>a[i];
s.push_back(s[i-1]+a[i]);
}

for(int i=0;i<q;i++)
cin>>k[i];
int killed=0,index=0;
for(int i=0;i<q;i++){

if(index==0){
ll val= k[i]+killed;
int pos = upper_bound(s.begin(), s.end(), val) 
            - s.begin();

if(pos==n){
  killed=0;
  index=0;
  cout<<n<<endl;
}

else{
 cout<<n-pos<<endl;
 killed = val;
if(pos>0)
killed-=s[pos-1]; 
 index = pos;
}            
} 
else{
ll val= s[index-1]+k[i]+killed;
int pos = upper_bound(s.begin(), s.end(), val) 
            - s.begin();

if(pos==n){
  killed=0;
  index=0;
  cout<<n<<endl;
}
else{
 cout<<n-pos<<endl;
 killed = val;
 if(pos>0)
killed-=s[pos-1]; 

 index = pos;
}           

} 



}




}

