#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    int a[n],i;
    for (i=1;i<n;i++) {
        cin >> a[i];
    }
    i=1;
    int ans=0;
    if (t==n) {
        cout << "YES";
        return 0;
    }
    while(i!=n){
        if(i==t){
            ans=1;
            break;
        }
        i+=a[i];
    }
    if (ans==0) {
        cout << "NO";
    }
    else cout << "YES";
}