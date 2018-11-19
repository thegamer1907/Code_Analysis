#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>

struct Line
{
     int data[5];
     int total;
};

int n, k;
Line m[10010];
int zerosForTeams[5];

int curCount;

int numberOfSol[20];

/*int compare(const void *a, const void *b)
{
     const Line *pa = (const Line *)a;
     const Line *pb = (const Line *)b;
     return pa->total - pb->total;
}*/

std::vector<int> twos[4];
std::vector<int> threes[7];
std::vector<int> fours[16];

void init()
{
     twos[1].push_back(2);
     
     
     threes[1].push_back(2);
     threes[1].push_back(4);
     threes[1].push_back(6);
     
     threes[2].push_back(1);
     threes[2].push_back(4);
     threes[2].push_back(5);
     
     threes[4].push_back(1);
     threes[4].push_back(2);
     threes[4].push_back(3);
     
     
     fours[1].push_back(2);
     fours[1].push_back(4);
     fours[1].push_back(8);
     fours[1].push_back(6);
     fours[1].push_back(10);
     fours[1].push_back(12);
     fours[1].push_back(14);
     
     fours[2].push_back(1);
     fours[2].push_back(4);
     fours[2].push_back(5);
     fours[2].push_back(8);
     fours[2].push_back(9);
     fours[2].push_back(12);
     fours[2].push_back(13);
     
     fours[4].push_back(1);
     fours[4].push_back(2);
     fours[4].push_back(3);
     fours[4].push_back(8);
     fours[4].push_back(9);
     fours[4].push_back(10);
     fours[4].push_back(11);
     
     fours[8].push_back(1);
     fours[8].push_back(2);
     fours[8].push_back(3);
     fours[8].push_back(4);
     fours[8].push_back(5);
     fours[8].push_back(6);
     fours[8].push_back(7);
     
     fours[3].push_back(4);
     fours[3].push_back(8);
     fours[3].push_back(12);

     fours[5].push_back(2);
     fours[5].push_back(8);
     fours[5].push_back(10);

     fours[6].push_back(1);
     fours[6].push_back(8);
     fours[6].push_back(9);

     fours[9].push_back(2);
     fours[9].push_back(4);
     fours[9].push_back(6);

     fours[10].push_back(1);
     fours[10].push_back(4);
     fours[10].push_back(5);

     fours[12].push_back(1);
     fours[12].push_back(2);
     fours[12].push_back(3);     
     
//==============================
     /*foursA[3].push_back(4);
     foursA[3].push_back(8);
     foursA[3].push_back(12);
     foursB[3].push_back(4);
     foursB[3].push_back(8);
     foursB[3].push_back(12);
     

     fours[5].push_back(2);
     fours[5].push_back(8);
     fours[5].push_back(10);

     fours[6].push_back(1);
     fours[6].push_back(8);
     fours[6].push_back(9);

     fours[9].push_back(2);
     fours[9].push_back(4);
     fours[9].push_back(6);

     fours[10].push_back(1);
     fours[10].push_back(4);
     fours[10].push_back(5);

     fours[12].push_back(1);
     fours[12].push_back(2);
     fours[12].push_back(3);     

     */
}

bool canFind3(int num)
{
     if (numberOfSol[num] <= 0)
          return false;
          
     for (int i = 0 ; i < threes[num].size() ; i++)
     {
          if (numberOfSol[threes[num][i]] > 0)
               return true;
     }
     
     return false;
}

bool canFind4(int num)
{
     if (numberOfSol[num] <= 0)
          return false;
          
     for (int i = 0 ; i < fours[num].size() ; i++)
     {
          if (numberOfSol[fours[num][i]] > 0)
               return true;
     }
     
     return false;
}

int main()
{
     init();
     scanf("%d%d", &n, &k);
     
     memset(numberOfSol, 0, sizeof(numberOfSol));
     int temp, data;
     for (int i = 0 ; i < n ; i++)
     {
          temp = 0;
          for (int j = 0 ; j < k ; j++)
          {
               scanf("%d", &data);//&(m[i].data[j]));
               temp = temp * 2;
               if (data == 1)
                    temp++;
               /*if (m[i].data[j] == 0)
               {
                    zerosForTeams[j]++;
                    m[i].total++;
               }*/
          }
          
          numberOfSol[temp]++;
     }
     
     if (numberOfSol[0] > 0)
     {
          printf("YES\n");
          return 0;
     }
     
     //
     if (k == 1) {
          printf("NO\n");
          return 0;
     } else if (k == 2) {
          if (numberOfSol[1] > 0 && numberOfSol[2] > 0) {
               printf("YES\n");
               return 0;               
          } else {
               printf("NO\n");
               return 0;
          }
     } else if (k == 3) {
          if (canFind3(1)) {
               printf("YES\n");
               return 0;
          } else if (canFind3(2)) {
               printf("YES\n");
               return 0;
          } else if (canFind3(4)) {
               printf("YES\n");
               return 0;
          } else {
               printf("NO\n");
               return 0;
          }
     }
     else if (k == 4)
     {
          for (int i = 1 ; i <= 15 ; i++)
          {
               if (fours[i].size() > 0)
               {
                    if (canFind4(i))
                    {
                         printf("YES\n");
                         return 0;
                    }
               }
          }
          
          printf("NO\n");
          return 0;
     }
     
     return 0;
}
