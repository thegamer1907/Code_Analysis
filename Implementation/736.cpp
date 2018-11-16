#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
  int n,t;
  char s;
  vector <char> a;
  cin >> n>> t;
  if (n >= 1 && n <= 100000)
  {
    for (int i = 0; i < n; i++)
    {
      cin >> s;
      a.push_back(s);
    }
    for (int j = 0; j < t; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if ((a[i] == 'B') && (a[i + 1] == 'G'))
      {
        a[i] = 'G';
        a[i + 1] = 'B';
        i++;
      }
    }
  }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i];
    }
    }
  
  return 0;
}