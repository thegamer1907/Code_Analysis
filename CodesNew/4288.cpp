#include <bits/stdc++.h>
#define fi first
#define se second
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define lowbit(x) x&-x
#define pb push_back
#define MP make_pair
#define clr(a) memset(a,0,sizeof(a))
#define FIN freopen("in.txt","r",stdin)
#define fuck(x) cout<<"["<<x<<"]"<<endl
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
typedef vector<int> VI;
const int MX = 5e5+7;
const int inf = 0x3f3f3f3f;
const double eps = 1e-6;

int n;
string str[MX];

int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i = 1;i <= n;i++) cin>>str[i];
    for(int i = n-1;i>=1;i--){
        string ans;
        int len1 = str[i].size(),len2 = str[i+1].size(),j,flag = 0;;
        for(j = 0;j < min(len1,len2);j++){
            if(str[i][j] > str[i+1][j]) break;
            if(str[i][j] < str[i+1][j]){
                flag = 1;
                break;
            }
            if(str[i][j] == str[i+1][j]) ans+=str[i][j];
        }
        if(flag) continue;
        str[i] = ans;
    }
    for(int i = 1;i <= n;i++)
        cout<<str[i]<<"\n";
    return 0;
}