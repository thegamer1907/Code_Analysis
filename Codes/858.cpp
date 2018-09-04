#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n,k;
    cin>>n>>k;
    int x = 1;
    int a = 2;
    while(k%a==0){
        x++;
        a*=2;
    }
    cout<<x;
    return 0;
}
