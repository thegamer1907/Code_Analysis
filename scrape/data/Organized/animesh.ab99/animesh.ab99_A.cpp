#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[m+1];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int count=0;
    int i=0,j=0;
    while(i<m){
        count++;
        ll temp=(a[i]-j+k-1)/k;
        i++;
        while(i<m && (a[i]-j+k-1)/k==temp)
            i++;
        j=i;
    }
    cout<<count;
}