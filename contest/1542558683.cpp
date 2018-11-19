#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n, k;
   cin >> n >> k;
   map <int, bool> check;
   bool right = false;
   vector< vector<int> > vec(16);
   for(int i = 0; i <= 15; i++)
   {
       for(int j = 0; j <= 15; j++)
       {
           if( (i & j) == 0)
           {
             vec[i].push_back(j);
           }
       }
   }
   for(int i = 0; i < n; i++)
   {
       int num2 = 0;
       for(int j = k -1; j >= 0; j--)
       {
           int a;
           cin >> a;
           num2 += pow(2,j) * a;
       }
       check[num2] = 1;
       for(int j = 0; j < vec[num2].size(); j++)
       {
           if(check[vec[num2][j]])
            right = true;
       }
   }
   if(right)
   {
       cout << "YES";
   }
   else
   {
       cout << "NO";
   }
   return 0;
}
