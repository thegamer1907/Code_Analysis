#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,k=0,d=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];

        f=f+a[i][0];
        k=k+a[i][1];
        d=d+a[i][2];
    }
    if(f==0&&k==0&&d==0) cout<<"YES";
    else cout<<"NO";

}
