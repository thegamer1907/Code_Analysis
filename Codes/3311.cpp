#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++)
        cin>>a[i];
    int mn=1000000001;
    for (int i=0;i<n;i++)
        a[i]=max(0,(a[i]-i+n-1)/n), mn=min(mn, a[i]);
    for (int i=0;i<n;i++){
        if (a[i]==mn){
            cout<<i+1;
            return 0;
        }
    }

    return 0;
}
