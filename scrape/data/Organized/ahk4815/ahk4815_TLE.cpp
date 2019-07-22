#include <iostream> 
#include<bits/stdc++.h> 
#define ll long long int 
using namespace std; 
int main(void) 
{ 
    ll n,m,k; 
    cin>>n>>m>>k; 
    ll arr[m]; 
    for(ll i=0;i<m;i++)cin>>arr[i]; 
    ll x=k; 
    ll ans=0,c=0;
    while(c<m)
    { 
        ll z=0; 
       for(;c<m;c++) 
       { 
           if(arr[c]<=x) 
            { z++; }
           else 
           break; 
        } 
    if(c==m)
    {ans++;break;} 
    if(z!=0)
    { x=x+z;ans++;} 
    else {
        ll p=(ceil)((arr[c]-x)/k);
        
        x=x+(p*k);} 
        
    } 
    cout<<ans; 
    
}