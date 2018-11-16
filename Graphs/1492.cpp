#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t, plc=1;
    bool chk=false;
    cin>>n>>t;
    int a[n];
    for (int i=0; i<n-1; i++) {
        cin>>a[i];
    }
    while (true) {
        if (plc==t) {
            chk=true;
            break;
        }
        plc=plc+a[plc-1];
        if (plc>n) {
            break;
        }
    }
    if (chk==true) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}
