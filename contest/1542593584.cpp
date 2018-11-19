//created by missever

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

string a,b;

int main() {
#ifdef CX_TEST
    freopen("E:\\program--GG\\test_in.txt", "r", stdin);
#endif
    cin>>a;
    int n,vis = 0;
    cin>>n;
    while(n--) {
        cin>>b;
        if(a == b) vis = 3;
        if(b[0] == a[1]) vis |= 2;
        if(b[1] == a[0]) vis |= 1;
    }
    if(vis == 3) puts("YES");
    else puts("NO");
    return 0;
}
