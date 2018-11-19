#include <bits/stdc++.h>
using namespace std;
const int N=202;
string s[N];int ans[N];
int a,b,n,x,m;
int solve(string str){
    for(int l=1;l<=10;l++){
        for(int i=0;i<(1<<l);i++){
            string v;
            for(int k=0;k<l;k++){
                if((i>>k)&1)
                    v='1'+v;
                else
                    v='0'+v;
            }
            if(str.find(v)==-1)
                return l-1;
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        cin>>s[i];
    scanf("%d",&m);
    for(int i=n+1;i<=n+m;i++){
        scanf("%d%d",&a,&b);
        s[i]=s[a]+s[b];
        int len=s[i].length();
        if(len>1000)
            s[i]=s[i].substr(0,500)+s[i].substr(len-500,len);
        ans[i]=max(solve(s[i]),max(ans[a],ans[b]));
        printf("%d\n",ans[i]);
    }
    return 0;
}
