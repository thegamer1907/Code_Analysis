#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,c[110];
    while (cin>>s){
        int n;
        cin>>n;
        int f,g;
        f=g=0;
        int i,j;
        for (i=1;i<=n;i++){
            cin>>c[i];
            if (c[i]==s) f=1;
        }
        for (i=1;i<=n;i++){
            for (j=1;j<=n;j++){
                //if (i==j) continue;
                if (c[i][1]==s[0] && s[1]==c[j][0]) g=1;
            }
        }
        if (f || g) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
