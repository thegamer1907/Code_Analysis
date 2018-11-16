#include <bits/stdc++.h>
using namespace std;
#define For(i,n) for(int i=0;i<n;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ans=0;

    cin>>n;
    int a[n];
    For(i,n) cin>>a[i];

    cin>>m;
    int b[m];
    For(i,m) cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    for(int i=0,j=0;i<n && j<m;){
        if(abs(a[i]-b[j])<2){
                ans++;
                i++;
                j++;
        }
        else{
            if(a[i]>b[j]) j++;
            else i++;
        }
    }

    cout<<ans;

}
