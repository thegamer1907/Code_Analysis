#include <bits/stdc++.h>
using namespace std;

const int N=1e3+10;
map <string,int> M;
string s1[N],s2[N];

int main(){
    ios::sync_with_stdio(false);
    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s1[i];
        M[s1[i]]++;
    }
    for(int i=1;i<=m;i++){
        cin>>s2[i];
        M[s2[i]]++;
        if(M[s2[i]]==2) cnt++;
    }
    if(cnt%2) n=n-(cnt/2)+1,m=m-(cnt/2);
    else n=n-(cnt/2),m=m-(cnt/2);
    if(n>m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
