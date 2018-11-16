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
#define MAX 80009
vector<int>graph[MAX];
#define WHITE 0
#define GREY 1

int check = 0;
int bfs(int source,int t)
{
    int color[MAX] = {0};
    queue<int>Q;
    Q.push(source);
    color[source] = GREY;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i = 0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(color[v]==WHITE)
            {
                color[v]=GREY;
                Q.push(v);
            }
            if(color[t]==GREY)
            {
                check = 1;
            }
        }
    }

}
void ck(int a,int b)
{
    bfs(a,b);
    if(check==1)
    {
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;
    }
}

int main()
{
 //freopen("input.txt","r",stdin);
 int a,n,t;
 sff(n,t);
 int u,v;
 for(int i = 1;i<n;i++)
 {
     sf(a);
     u=i;
     v=a+i;
     graph[u].pb(v);
 }
  ck(1,t);


    return 0;
}

