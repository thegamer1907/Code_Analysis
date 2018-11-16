#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int res = 0;
    while(res<n && k + (res+1)*(5)<=240)
        k += (++res)*5;
    cout<<res;
}
