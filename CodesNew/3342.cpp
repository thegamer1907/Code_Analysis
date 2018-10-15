#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[100],i,k=0,mx=0,mn=10000000;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>mx)mx=a[i];
        if(a[i]<mn)mn=a[i];
    }
    for(i=0; i<n; i++){
        if(a[i]<mx)k+=mx-a[i];
    }
    if(k==m)mn=mx;
    else if(k>m){
        mn = mx ;
//if((k-m)%n!=0)mn++;
    }
    else{
         mn = mx + (m-k)/n;
         if((m-k)%n!=0)mn++;
    }

    cout << mn << " " << mx+m << endl;
}
