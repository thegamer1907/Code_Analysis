#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dbg(x) cout << #x << " " << x << endl;
#define N 1000005

int main()
{

    string s;
    cin >> s;
    ll n,i;
    cin >> n;
    string ss[123]; 
    bool ans = false;
    for(i=1;i<=n;i++){
        cin >> ss[i];
        if(ss[i]==s)
            ans=true;
    }
    bool ans1=false,ans2=false;
    for(i=1;i<=n;i++){
        if(ss[i][1]==s[0])
            ans1=true;
        if(ss[i][0]==s[1])
            ans2=true;
    }
    ans=ans|(ans1&ans2);
    if(ans)
        cout << "YES";
    else
        cout << "NO";
}