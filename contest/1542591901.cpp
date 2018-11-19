#include<bits/stdc++.h>
#define lsc(x) scanf("%lld",&x)
#define sc(x) scanf("%d",&x)
#define lpr(x) printf("%lld ",x)
#define pr(x) printf("%d ",x)
#define n_l printf("\n")
#define VI vector<int>
#define VII vector<long long int>
#define m_p make_pair
#define pb push_back
#define fi first
#define se second
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;
const int N=(int)1e6+5;
const int mod = 1000000007;
typedef long long ll;
string st[200],tot[100005];
int main(){
    string s;cin >>s;
    int n;sc(n);
    for(int i=1;i<=n;i++) cin >>st[i];
    int cnt=1;
    for (int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) tot[cnt++]=st[i]+st[j];
    for (int i=1;i<cnt;i++){
        for (int j=0;j<3;j++)
            if (tot[i][j]==s[0] && tot[i][j+1]==s[1]){
                cout<<"YES\n";
                return 0;
            }
    }
    cout<<"NO\n";
    return 0;
}

