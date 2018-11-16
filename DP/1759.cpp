#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int a[maxn];
string s;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> s;
    memset(a,0,sizeof(a));
    int h = s.length();
    int ab[maxn],ba[maxn];
    int m=0,n=0;
    for(int i=0;i<h-1;i++){
        if(s[i]=='A' && s[i+1]=='B')
            ab[++m] = i;
        if(s[i]=='B' && s[i+1]=='A')
            ba[++n] = i;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(abs(ab[i]-ba[j])!=1){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
