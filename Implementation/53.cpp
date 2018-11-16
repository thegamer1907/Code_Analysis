#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,n,k=1;
    cin>>n>>a>>b;
    for (int i = 2; i<n; i*=2)
        if ((a-1)/i==(b-1)/i) {
            cout<<k;
            return 0;
        } else k++;
    cout<<"Final!";
    return 0;
}
