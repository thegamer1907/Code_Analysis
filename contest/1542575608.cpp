#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxlen=16;
const int maxn=1<<maxlen;
bool mark[201][maxn];
char pre[201][53],sub[201][53];
char s[109],t[109];
bool vis[maxn];
void mat(int i){
    for(int j=0;j<maxn;j++){
        int tmp=j,tl=0;
        while(tl<maxlen){
            t[tl++]='0'+tmp%2;
            tmp>>=1;
        }
        for(int ii=0,jj=tl-1;ii<jj;ii++,jj--){
            swap(t[ii],t[jj]);
        }
        t[tl]=0;
        if(strstr(s,t)!=NULL){
            mark[i][j]=1;
            //cout<<"j:"<<j<<endl;
        }
    }
}
int sol(){
    for(int i=1;i<=maxlen;i++){
        for(int j=0;j<(1<<i);j++){
            int tmp=j;
            for(int ii=0;ii<i;ii++){
                t[ii]='0'+tmp%2;
                tmp>>=1;
            }
            t[i]=0;
            if(strstr(s,t)==NULL)return i-1;
        }
    }
}
bool pan(int i,int j){
    memset(vis,0,sizeof(vis));
    int ar[33]={0};
    for(int jj=0;jj<maxn;jj++){
        if(!mark[i][jj])continue;
        int tmp=jj,tl=0;
        int now=0;
        int pos=1<<j;
        for(int ii=maxlen-1;ii>-1;ii--){
            ar[ii]=tmp%2;
            tmp>>=1;
        }
        for(int ii=0;ii<j-1;ii++){
            now*=2;
            now+=ar[ii];
        }
        for(int ii=j-1;ii<maxlen;ii++){
            now*=2;
            now+=ar[ii];
            if(now&pos){
                now^=pos;
            }
            vis[now]=1;
            //cout<<now<<' '<<j<<endl;
        }
    }
    for(int ii=0;ii<(1<<j);ii++){
        if(!vis[ii])return 0;
    }
    return 1;
}
int main(){
    int n,m,e,f;
    ios::sync_with_stdio(0);
    //freopen("in","r",stdin);
    //freopen("out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        int len=strlen(s);
        int tlen=0;
        for(int j=0;j<min(len,maxlen);j++){
            pre[i][tlen++]=s[j];
        }
        pre[i][tlen]=0;
        tlen=0;
        for(int j=max(0,len-maxlen);j<len;j++){
            sub[i][tlen++]=s[j];
        }
        sub[i][tlen]=0;
        if(tlen>=maxlen)mat(i);
    }
    cin>>m;
    for(int i=n+1;i<=m+n;i++){
        cin>>e>>f;
        for(int j=0;j<maxn;j++){
            mark[i][j]|=mark[e][j];
            mark[i][j]|=mark[f][j];
        }
        int te=strlen(sub[e]),tf=strlen(pre[f]);
        int tlen=0;
        for(int j=0;j<te;j++){
            s[tlen++]=sub[e][j];
        }
        for(int j=0;j<tf;j++){
            s[tlen++]=pre[f][j];
        }
        s[tlen]=0;
        if(strlen(pre[e])<maxlen){
            strcpy(pre[i],s);
            if(tlen>=maxlen){
                pre[i][maxlen]=0;
            }
        }
        else{
            strcpy(pre[i],pre[e]);
        }
        if(strlen(sub[f])<maxlen){
            if(tlen>=maxlen){
                for(int jj=0,ii=tlen-maxlen;jj<maxlen;jj++,ii++){
                    sub[i][jj]=s[ii];
                }
                sub[i][maxlen]=0;
            }
            else{
                strcpy(sub[i],s);
            }
        }
        else{
            strcpy(sub[i],sub[f]);
        }
        //cout<<i<<':'<<s<<' '<<strlen(s)<<endl;
        if(tlen>=maxlen){
            mat(i);
            for(int j=1;j<=maxlen;j++){
                //cout<<"J"<<j<<endl;
                if(!pan(i,j)){
                    cout<<j-1<<endl;
                    break;
                }
            }
        }
        else{
            cout<<sol()<<endl;
        }
    }
}
