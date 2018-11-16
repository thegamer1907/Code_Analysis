#include<bits/stdc++.h>


/***************>>    PRANTA KUMAR BISWAS    <<***************/
/******>>    DEPT. OF COMPUTER SCIENCE & ENGINEERING    <<****/
/***************>>    SESSION : 2016-2017    <<***************/
/**************>>    UNIVERSITY OF BARISAL    <<**************/



#define      pb           push_back
#define      mp           make_pair
#define      dbl          double
#define      fr(i,n)      for(int i = 0 ; i<n ;i++)
#define      fr1(i,n)     for(int i = 1 ; i<n ;i++)
#define      in(v)        v.begin(),v.end()
#define      max3(a,b,c)  max(a,max(b,c))
#define      min3(a,b,c)  min(a,min(b,c))
#define      nl           printf("\n");
#define      sf(n)        scanf("%d", &n)
#define      sff(n, m)    scanf("%d %d",&n,&m)
#define      MAX          9999999

int i;
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
int ceel(ll number, ll divider)
{
    dbl c;
    ll c2,ans=0;
    c2 = number/divider;
    c = (dbl)number/(dbl)divider;
    if((c-c2)!=0)
    {
        ans = c2+1;
    }
    else
    {
        ans = c2;
    }
    return ans;
}


/**************>>    TIME IS RUNNING OUT    <<**************/
/**************>>        START CODE        <<***************/
#define WHITE 0
#define GREY 1
#define BLACK 3
int n,t;
vector<int>graph[MAX];
int color[MAX];
int chek=0;

void DFS_Visit(int U)
{
    color[U]=GREY;
    for(int i=0;i<graph[U].size();i++)
    {
        int V=graph[U][i];
        if(color[V]==0)
        {
            color[V]=1;
            DFS_Visit(V);
        }
    }
}
void DFS()
{
    DFS_Visit(1);
}

int main()
{
 //freopen("input.txt","r",stdin);

    int a;
    sff(n,t);
    for(int i = 1;i<n;i++)
    {
        sf(a);
        int u = i;
        int v = a+i;
        graph[u].pb(v);
    }
    DFS();
    if(color[t]!=WHITE)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}

