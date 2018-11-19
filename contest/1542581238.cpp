
#include <map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
long long n,k;
long long MOD = 1000000007;
int a[200200][10];
int cnt[100];
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        for (int j = 0; j < k; j++) {
            cin>>a[i][j];
        }
        int c = 0;
        for (int l = 0; l <k ; ++l) {
            c*=2;
            c+=a[i][l];
        }
        cnt[c]++;
    }
    for (int m = 0; m < 15; ++m) {
        for (int i = 0; i < 15; ++i) {
            int p = m & i;
            if(p==0){
                if(cnt[m]&&cnt[i]){
                    cout <<"YES"<<endl;
                    return 0;
                }
            }

        }
    }
    cout <<"NO"<<endl;
    return 0;
}