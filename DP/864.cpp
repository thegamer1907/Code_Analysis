#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * author: Kruti_20
 */
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int count1=0;
    for(int i=0;i<n;i++) if(arr[i]==1) count1++;
    int ans=0;
    for(int i=0;i<n;i++){
        int c0=0,c1=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0) c0++;
            else c1++;
            ans=max(ans,count1-c1+c0);
        }
    }
    cout<<ans;
    return 0;
}

