#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b,b+m);
    i=j=k=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=1)k++,i++,j++;
        else if(a[i]<b[j])i++;
        else j++;
    }
    cout<<k;
    return 0;
}
