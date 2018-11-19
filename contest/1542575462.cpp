#include<bits/stdc++.h>
using namespace std;
const int M=8;
char s[205][405],ss[1000];
int nxt[1000],a[205];
void getnext(char *s)
{
    int len=strlen(s);
    memset(nxt,0,sizeof(nxt));
    for(int i=1;i<len;i++){
        int j=nxt[i];
        while(j&&s[i]!=s[j]) j=nxt[j];
        nxt[i+1]=(s[i]==s[j]) ? j+1 :0;
    }
}
int kmp(char *s,char *s2)
{
    int j=0,len=strlen(s),len2=strlen(s2);
    for(int i=0;i<len;i++){
        while(j&&s[i]!=s2[j]) j=nxt[j];
        if(s[i]==s2[j]) j++;
        if(j==len2) return 1;
    }
    return 0;
}
int f()
{
    char st[10];
    for(int i=M;i>=0;i--){
        int flag=0;
        for(int j=0;j<(1<<i);j++){
            int t=j;
            for(int x=0;x<i;x++){
                st[x]=(t%2)+'0';
                t/=2;
            }
            st[i]=0;
            getnext(st);
            if(kmp(ss,st)) continue;
            else{
                flag=1;
                break;
            }
        }
        if(flag) continue;
        else return i;
    }
    return 0;
}
int main()
{
    int n,x,y,m;
    //scanf("%s",ss);
    //printf("%d\n",f());
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",s[i]);
    }
    scanf("%d",&m);
    for(int _i=n+1,j=0;j<m;j++,_i++){
        scanf("%d%d",&x,&y);
        int lenx=strlen(s[x]),leny=strlen(s[y]),cnt=0;
        for(int i=max(0,lenx-200);i<lenx;i++) ss[cnt++]=s[x][i];
        for(int i=0;i<min(200,leny);i++) ss[cnt++]=s[y][i];
        ss[cnt]=0;
        int ans=0;
        ans=max(a[x],a[y]);
        ans=max(ans,f());
        cnt=0;
        for(int i=0;i<min(200,lenx);i++) ss[cnt++]=s[x][i];
        for(int i=max(0,leny-200);i<leny;i++) ss[cnt++]=s[y][i];
        strcpy(s[_i],ss);
        a[_i]=ans;
        printf("%d\n",ans);
    }
    return 0;
}
