#include<bits/stdc++.h>
using namespace std;

  long long int a,b,c,d,e,f,g;
  string s,t,u;
  int r1[6*10005];
  int color[6*10005];
  vector<int>v[6*10005];
  void dfs(int a)
  {
      color[a]=1;
      for(b=0;b<v[a].size();b++)
      {
          if(color[v[a][b]]==0)
          {
              int c=v[a][b];
              dfs(c);
          }
      }


  }

int main()
{

  while(cin>>a>>g)
  {

    for(c=1;c<=a-1;c++)
    {
       
        cin>>d;
        v[c].push_back(c+d);

    }
   for(c=1;c<=a;c++)
   {
       color[c]=0;
   }

    dfs(1);
    if(color[g]==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    for(int q=1;q<=a;q++)
    {
        v[q].clear();
    }


  }




    return 0;
}
