#include<iostream>


using namespace std;

int main()
{
  int m=0,n,sum =0,k1=0;
  cin >> n;
  for (int i = 1; i<=n;i++)
  {
      int f;
      cin >> f;
      if (f == 1) k1++;
      if (sum != 0 && f == 1) sum--;
      if (f == 0) sum++;
      m = max (m,sum);
  }
  if (m == 0) cout<< k1 -1; else
  cout << m+k1;
}
