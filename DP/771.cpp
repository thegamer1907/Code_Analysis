#include<bits/stdc++.h>
using namespace std;

int a[105];

int main() {
    int n, one = 0, ans = 0, c = 0;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i]) ++one;
    }
//    cout<<one<<endl;
    for(int i = 0; i  < n; i++) {
        for(int j = i; j< n; j++) {
            c = 0;
            for(int k = i; k <= j; k++) {
                if(!a[k]){
                    ++c;
                }
                else --c;
            }
           // cout<<i<<" "<<j<<" "<<c<<" "<<one<<endl;
            ans = max(ans, (one+c));
        }
    }
    cout<<ans;
    return 0;

}
