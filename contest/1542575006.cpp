#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
using namespace std;
string s[205];
int num[205];
int cal(int x)
{
    int n=s[x].size();
    n/=2;
    for(int i=1;i<=n+1;i++){
        int flag=0;
        string ss;
        for(int j=0;j<i;j++)ss+="0";
        for(int j=0;j<1<<i;j++){
            if(j){
                int k=i-1;
                while(1){
                    if(ss[k]=='0') {ss[k]='1';break;}
                    ss[k]='0';
                    k--;
                }
            }
            //cout<<ss<<endl;
            if(s[x].find(ss)==-1){
                flag++;
                break;
            }
        }
        if(flag){
            return i-1;
        }
    }
}
int cal(string sss,int l)
{
    int n=sss.size();
    n/=2;
    for(int i=l;i<=n+1;i++){
        int flag=0;
        string ss;
        for(int j=0;j<i;j++)ss+="0";
        for(int j=0;j<1<<i;j++){
            if(j){
                int k=i-1;
                while(1){
                    if(ss[k]=='0') {ss[k]='1';break;}
                    ss[k]='0';
                    k--;
                }
            }
            //cout<<ss<<endl;
            if(sss.find(ss)==-1){
                flag++;
                break;
            }
        }
        if(flag){
            return i-1;
        }
    }
    return l-1;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        num[i]=cal(i);
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        int ans=max(num[x-1],num[y-1]);
        s[n+i]=s[x-1];
        if(s[n+i].size()>200){
            s[n+i].erase(s[n+i].begin()+200,s[n+i].end());
        }
        if(s[x-1].size()+s[y-1].size()>400)
            s[n+i]+="#";
        int xx=s[n+i].size();
        s[n+i]+=s[y-1];
        
        if(s[n+i].size()>401){
            s[n+i].erase(s[n+i].begin()+xx,s[n+i].end()-200);
        }
        string ss=s[x-1]+s[y-1];
       // cout<<s[n+i]<<endl;
        //cout<<ss<<endl;
        num[n+i]=cal(ss,ans+1);
        printf("%d\n",num[n+i]);
    }
    return 0;
}
