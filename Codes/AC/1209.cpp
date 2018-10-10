#include<bits/stdc++.h>

using namespace std;

int n,m,k,l,i,j,a,b,d[100005],fx[100005];
string s;
map<string,int>mp;

main(){

cin>>n>>m;
if(n>m) {cout<<"YES";return 0;}
for(i=0;i<n;i++){
    cin>>s;
    mp[s]=1;
}

for(i=0;i<m;i++){
    cin>>s;
    if(mp[s]==1) k++;
}
if(n==m && k%2==1) {cout<<"YES";return 0;}
cout<<"NO";
}
