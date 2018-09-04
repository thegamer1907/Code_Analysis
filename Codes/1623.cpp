#include <bits/stdc++.h>
#define mx 300111
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define int long long
#define ff first
#define ss second
#define mod 1000000007
#define inf 1000000009
using namespace std;

int n,m;
int arr[mx];
int arr1[mx];
pair<int,int> fun(int k){
    int sum=0;
    int i;
    for(i=1;i<=n;i++){
        arr1[i] = arr[i]+(i*k);
    }
    sort(arr1+1,arr1+n+1);
    for(i=1;i<=k;i++){
        sum += arr1[i];
        if(sum>m)break;
    }
    return {i==k+1,sum};
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>arr[i];
    int low = 0,high=n;
    while(high-low>2){
        int mid = (low+high)>>1;
        if(fun(mid).ff){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    for(;high>=low;high--){
        if( fun(high).ff ){
            cout<<high<<" "<<fun(high).ss<<endl;
            break;
        }
    }
    return 0;
}
