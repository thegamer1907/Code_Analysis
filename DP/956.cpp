#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    int one[n], zero[n];
    cin>>arr[0]; one[0] = arr[0]; zero[0] = 1-arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        one[i] = one[i-1]+arr[i];
        zero[i] = zero[i-1]+1-arr[i];
    }
    int ans = 0;
    int a = one[n-1];
    for(int i=0;i<n;i++){
        for(int j=0;i+j<n;j++){
            int x = one[i+j]-one[i]+arr[i];
            int y = zero[i+j]-zero[i]+1-arr[i];
            ans = max(ans, a+y-x);
        }
    }
    cout<<ans;
    return 0;
}
