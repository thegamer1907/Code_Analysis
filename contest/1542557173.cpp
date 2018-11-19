#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int ans[200];
int vis[100];
int main(){
  ans[0] = 0;
  for(int i = 1; i <= 60 ; i++)
  {
      ans[i] = i;
  }
  ans[60] = 0;
  for(int i = 1; i <= 60 ; i++)
  {
      ans[i + 60] = i;
  }
  ans[120] = 0;
  int h, m, s, t_1, t_2;
  while(scanf("%d%d%d%d%d", &h, &m, &s, &t_1, &t_2) != EOF)
  {
      int flag = 0;
      int flag1 = 0;
      int flag2 = 0;
      memset(vis, 0 , sizeof(vis));
      h = h * 5 ;
      if(s)
      {
          h = (h + 1) % 60;
          m = (m + 1) % 60;
          flag2 = 1;
      }
      t_1 = (t_1 * 5) %60;
      t_2 = (t_2 * 5) %60;
      vis[h] = 1;
      vis[m] = 1;
      vis[s] = 1;
      for(int i = t_1; i <= 120; i++)
      {
          if(flag2)
          {
                  if(t_1 != ans[i]&&vis[ans[i]] == 1)
              {
                  flag = 1;
                ///  printf("ans : %d\n",ans[i]);
                   break;
              }
                 else if(ans[i] == t_2)
              {
                  flag1 = 1;
                  break;
              }

          }
          else {
                if(ans[i] == t_2)
          {
              flag1 = 1;
              break;
          }
          else if(t_1 != ans[i]&&vis[ans[i]] == 1)
          {
              flag = 1;
            ///  printf("ans : %d\n",ans[i]);
               break;
          }

          }
      }
       for(int i = t_2; i <= 120; i++)
      {
          if(flag2)
          {
                  if(t_2 != ans[i]&&vis[ans[i]] == 1)
              {
                  flag = 1;
                ///  printf("ans : %d\n",ans[i]);
                   break;
              }
                 else if(ans[i] == t_1)
              {
                  flag1 = 1;
                  break;
              }

          }
          else {
                if(ans[i] == t_1)
          {
              flag1 = 1;
              break;
          }
          else if(t_2 != ans[i]&&vis[ans[i]] == 1)
          {
              flag = 1;
            ///  printf("ans : %d\n",ans[i]);
               break;
          }

          }
      }
      if(flag1)
       {
            printf("YES\n");
            continue;
       }
      else if(flag)
       {
            printf("NO\n");
            continue;
       }

  }
  return 0;
}

	   	  						  		   	 					   	