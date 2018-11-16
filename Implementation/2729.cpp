#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
   int b[100];
   int n,x;
   cin >> n;
   for (int i=0; i<n; i++)
   {
       cin >> x;
       b[x-1] = i+1;
   }
   for (int i=0; i<n; i++) cout << b[i] << " ";


   return 0;
}

