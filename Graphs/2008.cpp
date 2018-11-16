#include <iostream>

using namespace std;
struct path{int d;path *nxt;} *a[100001];
bool cat[100001],v[100001];
int n,lef,C;
void src(int k,int cats)
{
    if(cat[k]){++cats;if(cats>C)return;}
    else cats=0;
    v[k]=1;
    if(a[k]->nxt==NULL){if(k!=1)++lef;}
    while (a[k]!=NULL)
    {
        path *tbd=a[k];
        if(!v[a[k]->d])
        {
            src(a[k]->d,cats);
        }
        a[k]=a[k]->nxt;
        delete tbd;
    }
}
int main()
{
    cin>>n>>C;
    for(int i=1;i<=n;++i)cin>>cat[i];
    for(int i=1;i<n;++i)
    {
        int x,y;
        path *q=new path;
        cin>>x>>y;
        q->d=y;
        q->nxt=a[x];
        a[x]=q;
        q=new path;
        q->d=x;
        q->nxt=a[y];
        a[y]=q;
    }
    src(1,0);
    cout<<lef;
}
