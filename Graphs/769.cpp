//just some shitty code hope the compiler accept it , but it isn't then fuck u codeforces.
#include <bits/stdc++.h>
using namespace std;

int main()

{
    int a,b;
    string s;
    cin>>a>>b>>s;
  for(int i = 0 ; i< b;i++)
  {
     for(int j =a-1 ; j >= 0 ;j--)
     {
         if(s[j] =='G'&&s[j-1] == 'B')
         {
              s[j] = 'B';
              s[j-1] = 'G';
              j--;
         }
     }
  }
  cout <<s<<endl;
   return 0;
}
