#include <iostream>
using namespace std;
int arr[100000 + 10];
long long sum[100000 + 10];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum[0] = arr[0];
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1] + arr[i];
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int ans = lower_bound(sum,sum+n,q) - sum;
        cout<<ans + 1<<endl;
    }
    return 0;
}
