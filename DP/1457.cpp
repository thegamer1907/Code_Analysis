#include <iostream>
  #include <stdlib.h>
  #include <stdio.h>
  using namespace std;
  
  const int maxn = 100+10;
 
  int main()
  {
     int n, a[maxn], i, j, m, count1, count0, max, t0, t1, t;
     while (cin >> n)
     {
         for (t = i = 0; i < n; i++)
         {
             scanf("%d", &a[i]); 
            if (a[i])
                 t++;      
 
        }
         max = -10;
         for (i = 0; i < n; i++)
         {   
             for (j = i; j < n; j++)
             {
                 count1 = count0 = 0;
               for (m = i; m <= j; m++)      
                 {
                    if (a[m])          
                         count1++;
                     else
                         count0++;
                 }
                 if (max < count0 - count1) 
                 {
                     max = count0 - count1;
            //      t0 = count0;
             //      t1 = count1;
                 }
             }
         }
    //  cout << "t0 = " << t0 << endl;
     //  cout << "t1 = " << t1 << endl;
         printf("%d\n", t + max);
     }                   return 0;
 }