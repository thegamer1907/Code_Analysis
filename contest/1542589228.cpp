#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s,t,a[105];
ll i,j,n;
int main()
{
    cin >> s;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==s || (a[i][0]==s[1] && a[i][1]==s[0])){
            cout << "YES" << endl;
            exit(0);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i!=j){
                t="";
                t+=a[i][1];
                t+=a[j][0];
                if(t==s){
                    cout << "YES" << endl;
                    exit(0);
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
