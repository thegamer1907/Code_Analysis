#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<time.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define lson l,mid,pos<<1
#define rson mid+1,r,pos<<1|1
typedef long long ll;
const int maxm=1000+5;
const int maxn=1000+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
const double eps=1e-8;
string q[110];
int main()
{
    char s[10];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        cin>>q[i];
        if (q[i].find(s)!=-1)return 0*puts("YES");
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (q[i][0]==s[1]&&q[j][q[j].size()-1]==s[0])return 0*puts("YES");
        }
    }
    puts("NO");
    return 0;
}
