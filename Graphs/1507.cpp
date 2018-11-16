#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,c=0;
    cin>>n>>m;
    int ar[n];
    i=0;n--;
    while(i++<n)
    cin>>ar[i];
    i=1;
    while(i<=m)
    {
    	if(i==m){
    	c=1;break;}
    	else
    	i+=ar[i];
    }
    if(c)
    cout<<"YES";
    else
    cout<<"NO";
    
}