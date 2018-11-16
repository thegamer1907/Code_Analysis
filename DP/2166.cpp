
#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;
int main()
{
    long long int n, m;
    cin>>n>>m;
    long long int a[n+1], d[100001] = {0}, dis[n+2];
    dis[n+1] = 0;
    for(long long int i = 1;i<=n;i++)
        cin>>a[i];
    for(long long int i = n;i>0;i--){
        if(d[a[i]] == 0){
            d[a[i]] = 1;
            dis[i] = dis[i+1] + 1;
        }
        else
            dis[i] = dis[i+1];
    }
    long long int l;
    for(long long int i = 0;i<m;i++){
        cin>>l;
        cout<<dis[l]<<endl;
    }
    return 0;
}
