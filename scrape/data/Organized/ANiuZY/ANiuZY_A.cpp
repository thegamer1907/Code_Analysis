#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
vector<int> mx,my;
struct node
{
    int x,y;
}p[maxn];

int numx[maxn];

bool cmp(const node &a,const node &b)
{
    if(a.y==b.y)
        return a.x<b.x;
    return a.y<b.y;
}
vector<int> g[maxn];

int sum[maxn];
int lowbit(int x) {return x&-x;}
void add(int x) {for(int i=x;i<=maxn;i+=lowbit(i)) sum[i]++;}
int query(int x) {int ans=0;for(int i=x;i>=1;i-=lowbit(i)) ans+=sum[i];return ans;}

int main()
{
    memset(numx,0,sizeof numx);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].x>>p[i].y;
        mx.push_back(p[i].x);
        my.push_back(p[i].y);
    }
    sort(mx.begin(),mx.end());
    sort(my.begin(),my.end());
    mx.erase(unique(mx.begin(),mx.end()),mx.end());
    my.erase(unique(my.begin(),my.end()),my.end());
    for(int i=1;i<=n;i++)
    {
        p[i].x=lower_bound(mx.begin(),mx.end(),p[i].x)-mx.begin()+1;
        p[i].y=lower_bound(my.begin(),my.end(),p[i].y)-my.begin()+1;
    }
    sort(p+1,p+n+1,cmp);
    int lenx=mx.size();
    int leny=my.size();
    for(int i=1;i<=n;++i){
        numx[p[i].x]++;
    }
    int now=1;
    for(int i=1;i<=leny;i++)
    {
        while(p[now].y==i)
            g[i].push_back(p[now].x),now++;
        //sort(g[i].begin(),g[i].end());
    }
    long long ans=0,all=lenx,tmp;
    int limitx=lenx;
    for(int i=1;i<=leny;i++){

//        int p=0;
//        for(int j=1;j<=lenx;++j){
//            if(numx[j]){
//                while(p<g[i].size()&&g[i][p]<j)p++;
//                if(p>=g[i].size())break;
//                while(numx[limitx]<=0)limitx--;
//                ans+=limitx-(g[i][p]-1)-(query(limitx)-query(g[i][p]-1));
//                //printf("[%d|%d]:%d\n",i,j,limitx-g[i][p]+1);
//            }
//        }

        while(numx[limitx]<=0)limitx--;

        tmp=g[i][0]-1-query(g[i][0]-1)+query(0);
        ans-=(tmp+1)*tmp/2;
        
        for(int j=1;j<g[i].size();++j)tmp=g[i][j]-g[i][j-1]-1-query(g[i][j]-1)+query(g[i][j-1]),ans-=(tmp+1)*tmp/2;

        tmp=limitx-g[i][g[i].size()-1]-query(limitx)+query(g[i][g[i].size()-1]);
        if(tmp)ans-=(tmp+1)*tmp/2;

        ans+=(all+1)*all/2;
        for(int j=0;j<g[i].size();++j)if(--numx[g[i][j]]==0)add(g[i][j]),all--;
    }
    cout<<ans<<endl;
    return 0;
}