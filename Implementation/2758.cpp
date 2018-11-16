#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    if(n==1){
        cout<<"0";
        return 0;
    }
    int a[n],max = INT_MIN;
    long long ans=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max)
            max = a[i];
    }
    for(i=0;i<n;i++){
        ans += (max-a[i]);
    }
    cout<<ans;
    return 0;
}
