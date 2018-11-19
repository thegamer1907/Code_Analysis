#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define INF 1061109567
#define maxans 10
#define maxsiz 180000
int n,m;
bool b[210][maxsiz];int best[210];
string s[210][2];
string ss;

bool has0(int x){
    if(x==0) return 1;
    while(x>0){
        if(x%3==0) return 1;
        x/=3;
    }
    return 0;
}

void update(int id){
    while(b[id][best[id]]||has0(best[id])) 
        best[id]++;
}

int getans(int x){
    int ans=0;
    while(x){x/=3;ans++;}
    return max(0,ans-1);
}

int main(){
    //freopen("in.in","r",stdin);
    int i,j,k,x,y,tmp,v;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>ss;
        for(j=0;j<int(ss.length());j++){
            v=0;
            for(k=j;k<min(j+maxans,int(ss.length()));k++){
                v=v*3+ss[k]-'0'+1;
                b[i][v]=1;
            }
        }
        update(i);
        tmp=min(maxans,int(ss.length()));
        s[i][0]=ss.substr(0,tmp);
        s[i][1]=ss.substr(ss.length()-tmp,tmp);
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        for(j=0;j<maxsiz;j++) b[n+i][j]=b[x][j]||b[y][j];
        best[n+i]=max(best[x],best[y]);
        ss=s[x][1]+s[y][0];
        for(j=0;j<int(ss.length());j++){
            v=0;
            for(k=j;k<min(int(ss.length()),j+maxans);k++){
                v=v*3+ss[k]-'0'+1;
                b[n+i][v]=1;
            }
        }
        tmp=min(s[y][0].length(),maxans-s[x][0].length());
        s[n+i][0]=s[x][0]+s[y][0].substr(0,tmp);
        tmp=min(s[x][1].length(),maxans-s[y][1].length());
        s[n+i][1]=s[x][1].substr(s[x][1].length()-tmp,tmp)+s[y][1];
        update(n+i);
        printf("%d\n",getans(best[n+i]));
    }
}