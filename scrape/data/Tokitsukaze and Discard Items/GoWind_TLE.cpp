#include<bits/stdc++.h>
using namespace std;

long long n,m,k;
inline long long find_lw(long long x){
    return ((x-1)/k)*k+1;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    cin>>n>>m>>k;

    vector<long long> arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    int i = 0;
    int offset = 0;
    int h=-1, l=-1;
    int ans = 0;
    while(i<m){
        if(arr[i]-offset>h){    //processed a frame
            // cout<<"arr[i] : "<<arr[i]<<" i : "<<i<<endl;
            ans ++;
            offset = i;
            l = find_lw(arr[i] - offset);
            h = l + k - 1;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}