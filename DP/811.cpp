#include "bits/stdc++.h"
using namespace std;
int main() {
        int n, A[104], ms = 0, me = 103, s = 0, e, sum = 0, m = 0;
        cin>>n;
        for(int i = 0; i < n; i++) {
                cin>>A[i];
                int tem;
                if(A[i] == 0)
                        tem = 1;
                else
                        tem = -1;
                sum += tem;
                if(sum <= 0) {
                        sum = 0;
                        s = i + 1;
                }
                if(sum > m) {
                        m = sum;
                        ms = s;
                        me = i;
                }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
                if(i < ms || i > me) {
                        if(A[i] == 1)
                                ans++;
                }
                if(i >= ms && i <= me) {
                        if(A[i] == 0)
                                ans++;
                }
        }
        if(m)
                cout<<ans<<endl;
        else
                cout<<n-1<<endl;
}
