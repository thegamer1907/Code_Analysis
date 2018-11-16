#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n,k,cnt = 0,a[100];
    cin>>n>>k;

    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i<n; i++) {
        if (a[i]>=a[k - 1] && a[i]>0) {
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}
