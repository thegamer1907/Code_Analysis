#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n],max=0,tot=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max)max=arr[i];
        tot+=arr[i];
    }
    if(max>=(tot+m+n-1)/n)cout<<max<<" ";
    else cout<<(tot+m+n-1)/n<<" ";
    cout<<max+m<<endl;
    return 0;
}

