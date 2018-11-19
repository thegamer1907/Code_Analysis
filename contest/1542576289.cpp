#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int n,k;
int A[20];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        int x=0;
        for(int j=0;j<k;j++) {
            x*=2;
            int tmp;
            cin>>tmp;
            x+=tmp;
        }
        A[x]=1;
    }
    for(int i=0;i<(1<<k);i++) {
        for(int j=0;j<(1<<k);j++) {
            if( (i&j)==0 ) {
                if(A[i]==1 && A[j]==1) {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}
