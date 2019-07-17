#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    lli n,m,k,r;cin>>n>>m>>k;
    r=k;
    lli arr[m+1];
    for(int i=0;i<m;i++)
    cin>>arr[i];
    arr[m]=0;
    lli i=0,p=0;
    while(i<m){
        //int f=0;
        if(arr[i]<=k){
            i++;
            if(p==0)
              p=1;
            //f=1;
        }
            else{int l;
                l=(arr[i]-i-1)/r;
                k=(l+1)*r+i;
                p++;
            }
        //cout<<p<<" "<<arr[i]<<" "<<k<<"\n";
    }
    cout<<p;
    return 0;
}