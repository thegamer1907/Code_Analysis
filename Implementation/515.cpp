#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(){
    IOS;
    int n, k;
    cin>>n>>k; k--;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];

    int cnt = 0;
    for(int i=0;i<n;++i)if(a[i] > 0 && a[i] >= a[k])
        cnt++;
    cout<<cnt<<endl;

    return 0;
}
