#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, k;
   cin >> n >> k;
   bool check[16] = {};
   bool right = false;
   vector< vector<int> > vec(16);
   for(int i = 0; i <= 15; i++)
       for(int j = 0; j <= 15; j++)
           if( (i & j) == 0)
             vec[i].push_back(j);

   for(int i = 0; i < n; i++)
   {
       int a, num2 = 0, p = 1;

       for(int j = k -1; j >= 0; j--, p <<= 1 )
           scanf( "%i", &a ), num2 += p * a;

       check[num2] = 1, p = vec[num2].size();

       for( int j = 0; j < p; j++ )
           if( check[vec[num2][j]] )
                right = true;
   }

   if(right)
       cout << "YES";
   else
       cout << "NO";
   return 0;
}
