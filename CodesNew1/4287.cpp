#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<stack>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;

#define bug printf("*********\n");
#define debug(x) cout<<"["<<x<<"]" <<endl;
#define mid (l+r)/2
#define chl 2*k+1
#define chr 2*k+2
#define lson l,mid,chl
#define rson mid,r,chr
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a));

const long long mod=1e9+7;
const int maxn=5e5+5;
const int INF=0x7fffffff;
const int inf=0x3f3f3f3f;
const double eps=1e-8;

int n;
string s[maxn];
int len[maxn],u[maxn];
int main() {
    int n;
    scanf("%d",&n);
    int mx=0;
    for(int i=1; i<=n; i++) {
        cin>>s[i];
    }
    for(int i=n; i>1; i--) {
        for(int j=0; j<s[i].length(); j++) {
            if(j==s[i-1].length())break;
            if(s[i][j]>=s[i-1][j]) {
                if(s[i][j]==s[i-1][j]) {
                    if(j==s[i].length()-1) {
                        s[i-1]=s[i-1].substr(0,j+1);
                        break;
                    }
                    continue;
                }
                break;
            } else {
                s[i-1]=s[i-1].substr(0,j);
                break;
            }
        }
    }
    for(int i=1; i<=n; i++)cout<<s[i]<<endl;
    return 0;
}
