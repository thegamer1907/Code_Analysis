#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*bool verif(string x,string x1)
{
   int j=0;
 while (j+1<x.length())
    {
     string t=x.substr(j,2);
            if(t==x1)
            {
               return true;
            }
      j++;
    }
    return false;
}*/
int main()
{
  bool F=false,F1=false;
  string pass;
  cin>>pass;
  int a;
  cin>>a;
  vector<string>tab;
  tab.resize(a);

  for (int i=0;i<a;i++)
  {
      cin>>tab[i];
  }
  for (int i=0;i<a;i++)
  {
      if (tab[i]==pass)
      {
          cout<<"YES";
          return 0;
      }
      if (tab[i][0]==pass[1])
      {
          F=true;
      }
      if(tab[i][1]==pass[0]) {
        F1=true;
      }


  }
  if ((F)&&(F1))
  {
      cout<<"YES";
      return 0;
  }
  else
  {
      cout<<"NO";
      return 0;
  }

}
