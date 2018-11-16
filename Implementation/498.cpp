#include <bits/stdc++.h>
using namespace std;
long a[100];
long n,k,x;
int main(){
    cin>>n>>k;
    for(auto i=1;i<=n;i++){
        cin>>a[i];
        if(i==k)
            x=a[i];
    }
    long count=0;
    for(auto i=1;i<=n;i++){
        if(a[i] >= x && a[i] > 0)
        count++;
    }
    cout<<count;
    return 0;  
}