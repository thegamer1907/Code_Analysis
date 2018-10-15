#include <iostream>
#include <algorithm>
using namespace std;
int a[500002];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int skizb=(n+1)/2,ans=n;
    for(int i=0;i<(n+1)/2;i++){
        int l=skizb-1,r=n;
        while(l<r-1){
            int m=(l+r)/2;
            if(a[m]>=2*a[i])
                r=m;
            else
                l=m;
        }
        if(r==n)
            break;
        skizb=r+1;
        ans--;
    }
    cout<<ans<<endl;
    return 0;
}