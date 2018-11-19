#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<=k;i++)
#define per(i,j,k) for(int i=j;i>=k;i--)
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
typedef long long ll;
const int maxn=1e6+10;
int n,m,k,t;

int main(){
    ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
    #ifdef LOCAL
        freopen("1.txt","r",stdin);
    #endif // LOCAL
    string s1;
    cin>>s1;
    int flag1,flag2,flag3;
    flag1=flag2=flag3=0;
    int n;
    cin>>n;
    string s2;
    rep(i,1,n){
        cin>>s2;
        if(s1[0]==s2[0]&&s1[1]==s2[1]) flag1=1;
        if(s1[0]==s2[1]) flag2=1;
        if(s1[1]==s2[0]) flag3=1;
    }
    if(flag1) cout<<"YES"<<endl;
    else if(flag2&&flag3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
