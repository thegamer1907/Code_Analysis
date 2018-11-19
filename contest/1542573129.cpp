#include<bits/stdc++.h>
using namespace std;
int main()
{
    string k;
    cin >> k;
    int n ;
    cin >> n;
    string s[107];
    for(int i=0;i<n;++i) cin >> s[i];
    bool ok=false;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
        {
            if(s[i][1]==k[0]&&s[j][0]==k[1]) ok=true;
            if(s[i]==k) ok=true;
        }
    cout << (ok?"YES":"NO") << endl;
    return 0;
}
