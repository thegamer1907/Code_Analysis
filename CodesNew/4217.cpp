#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define clr(i, j)   memset(i, j, sizeof i)
#define pb push_back
#define mp make_pair

int main(){
    ll a,b,s=0;
cin>>a>>b;
ll arr[a];
for(int i=0;i<a;i++){
    cin>>arr[i];

}ll ans=0;ll m=0;
sort(arr,arr+a);
ll o=0;
for(ll i=0;i<a;i++){
s+=arr[i];
while((i-o+1)*arr[i]>s+b){
    s-=arr[o];o++;
}
if((i-o+1)>ans){
    ans=i-o+1;
    m=arr[i];
}
}
cout<<ans<<" "<<m;
		//cout<< (v[2]+v[2]-v[1]-v[0])/2 <<endl;


		//cout<< (v[2]+v[2]-v[1]-v[0])/2 + 2 <<endl;

}
