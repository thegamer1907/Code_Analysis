#include<iostream>
using namespace std;
int i,n,m,j,l,h,d; string k[1005],s[1005],f[1005];
int main()
{
    cin>>n>>m;
    for(i=1; i<=n; i++)
    cin>>s[i];
    for(i=1; i<=m; i++)
    cin>>k[i];
    if(m>n) 
        cout<<"NO";
    else  
     if(n>m) cout<<"YES";
     else {   for(i=1; i<=n; i++)
     	for(j=1; j<=m; j++)
     	if(s[i]==k[j]) l++; 
     if(n%2!=0)
    { if(l%2!=0)
     cout<<"YES";
     else cout<<"NO"; }
     else {
     	
     	if(l%2==0) cout<<"NO";
	     else cout<<"YES"; 
     }
}}