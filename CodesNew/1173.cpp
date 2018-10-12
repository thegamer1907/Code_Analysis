#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100009];
main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 1e9+1;
    for(int i = 0; i < n; i++){
        int X = (a[i] - i - 1) - (a[i] - i - 1 + n) % n + n + i + 1;

        ans = min(ans, X);
        //kn + i>a[i]
    }
    cout<<(ans - 1 + n) % n + 1<<endl;
}
