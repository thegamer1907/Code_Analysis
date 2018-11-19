#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define pii pair<ll,ll>
#define ppi pair<ll,pii>

int main()
{
    char ch[3];
    char s[3];
    bool v1=1,v2=1;
    ll n,i,j,k;
    scanf("%s",s);
    scanf("%lld",&n);
    while(n--){
        scanf("%s",ch);
        if(ch[0]==s[1])
            v1=0;
        if(ch[1]==s[0])
            v2=0;
        if(ch[0]==s[0] && ch[1]==s[1]){
            v1=0;
            v2=0;
        }
    }
    if(!v1&&!v2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
