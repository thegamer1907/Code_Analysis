#include <iostream>
#include <algorithm>
using namespace std;
int arrg[100];
int arrb[100];
bool arrg1[100];
bool arrb1[100];
int main ()
{
  int n , m;
  cin >> n;
  for (int i = 0; i < n; i ++)
  cin >> arrb[i];
  cin >> m;
  for (int i = 0; i < m; i ++)
  cin >> arrg[i];
  sort (arrg , arrg + m);
  sort (arrb , arrb + n);
  int s = 0;
  for (int i = 0; i < n; i ++)
  {
      for (int j = 0; j < m; j ++)
      {
         int x = max (arrb[i], arrg[j]);
         int y = min (arrb[i] , arrg[j]);
          if ( arrb1[i] == false && arrg1[j] == false)
          if ( x - y  == 1 || x - y == 0)
          {
              s ++;
              //cout << arrb[i] << "   " << arrg[i]  << " : " << arrb[i] - arrg[i]<< endl;
              arrb1[i] = true;
              arrg1[j] = true;
          }
      }
  }
  cout << endl <<s;
}

