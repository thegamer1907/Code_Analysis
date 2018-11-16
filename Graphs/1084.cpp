#include <bits/stdc++.h>
using namespace std;


int main()
{
int n , t , k[40000] , v=0 ;
scanf ("%d %d" , &n , &t);
for (int i=0 ; i<n-1 ; i++) cin >> k[i];
while (1)
{
    v+=k[v] ;
    if (v+1==t)
    {
       printf("YES");
        return 0 ;
    }
    if (v+1>t)
    {printf  ("NO");
    return 0;}
}

return 0;
   }

