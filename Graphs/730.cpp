#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{   
   int n, t;
   cin >> n;
   cin >> t;
   string inp;
   cin >> inp;
   while(t--) {
     int i=n-1;
     while (i>0) {
       if (inp[i] == 'G' && inp[i-1] == 'B') {
         swap(inp[i-1], inp[i]);
         i = i-1;
       } 
       i = i-1; 
     }
   }
   cout << inp << endl;
}


