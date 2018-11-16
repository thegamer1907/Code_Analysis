#include <iostream>
using namespace std;

int n, x;
int a[105];

int main() {
    cin >>n;
    for(int i = 1; i <= n; i++) {
        cin >>x;
        a[x] = i;
    }
    for(int i = 1; i <= n; i++) {
        if(i != 1) cout <<" ";
        cout <<a[i];
    }
    cout <<endl;
    return 0;
}
