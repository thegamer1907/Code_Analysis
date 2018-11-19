#include <cstdio>
#include <cstring>

struct Node
{
     char h, t;
};

Node nodes[110];
int szNodes;
char src[10];


bool isPossible()
{
     for (int i = 0 ; i < szNodes ; i++)
     {
          //self
          if (nodes[i].h == src[0] && nodes[i].t == src[1])
               return true;
          
          for (int j = 0 ; j < szNodes ; j++)
          {
               if (nodes[i].t == src[0] && nodes[j].h == src[1])
                    return true;
          }
     }
     
     return false;
}

int main()
{
    
     scanf("%s\n", src);
     
     char temp[100];
     int szTemp;
     scanf("%d\n", &szNodes);
     for (int i = 0 ; i < szNodes ; i++)
     {
          scanf("%s\n", temp);
          szTemp = strlen(temp);
          
          nodes[i].h = temp[0];
          nodes[i].t = temp[szTemp - 1];
     }
     
     if (isPossible())
          printf("YES");
     else
          printf("NO");
     
     
     return 0;
}
