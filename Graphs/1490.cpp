#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    int a[n+1];
    for(int i = 1;i<n;i++){
        cin>>a[i];
    }
    int i = 1;
    while(i <= t){
            if(i == t){
                cout<<"Yes";
                return 0;
            }
            else
        i = i + a[i];
    }
    cout<<"No";
    return 0;
}
