#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,a,b) for(int i=a;i<b;i++)


int main(){
    int n;cin>>n;
    int a[n];
    rep(i,0,n)cin>>a[i];
    sort(a,a+n);

    int i=0;int j=n/2;
    while(i<n/2){
        while ( j<n && (a[i]*2)>a[j] )
            j++;
        if(j==n)
            break;
        j++;
        i++;
    }
    int ans= n-i;
    cout<<ans<<endl;
    return 0;
    
}