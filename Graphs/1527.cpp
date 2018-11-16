#include<bits/stdc++.h>
using namespace std;
const int maxn= 3e4;
int main(){
int n, t, cell[maxn];
cin>>n>>t;
for(int i=1; i<=n-1; i++){
  cin>>cell[i];
}
int i=1;
while(i<=t){
if(i==t) {cout<<"YES"; return 0;}
cell[i]+=i;
i=cell[i];
}
cout<<"NO";
return 0;
}
