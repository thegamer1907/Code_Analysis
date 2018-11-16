#include <bits/stdc++.h>
#include <string>
using namespace std;

int n, t; string a;
int main()
{
    cin >> n >> t; cin >> a;
     for(int i = 1; i <= t; i++)
     {
         for(int k = 0; k <= n-1; k++)
         {
             if((a[k] == 'B') && (a[k+1] == 'G'))
             {a[k] = 'G'; a[k+1] = 'B'; k+=1;}
         }
     }
     cout << a;


}
