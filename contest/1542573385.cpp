#include <bits/stdc++.h>
#define maxn 100100
#define INF 0x3f3f3f3f
typedef long long ll;
using namespace std;
int ans[210];
string s[210];
int f(int num){
    for(int i=1;i<=10;i++){
        for(int j=0;j<=(1<<i)-1;j++){
            string t;
            for(int k=0;k<i;k++){
                if(j&(1<<k)) t += '1';
                else t += '0';
            }
            if(s[num].find(t) == -1) return i-1;
        }
    }
}
int main(){
    int n, m, l, r;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>s[i];
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>l>>r;
        s[i+n] = s[l]+s[r];
        if(s[i+n].length() > 1000) s[i+n] = s[i+n].substr(0, 500)+s[i+n].substr(s[i+n].length()-500, 500);
        ans[i+n] = max(max(ans[l], ans[r]), f(i+n));
        cout<<ans[i+n]<<"\n";
    }
    return 0;
}
