#include <stdio.h>

int kmp_arr[1000005];

int n, mx, res;

int main (){
   char s[1000005];
   scanf ("%s", s);

   for (n = 0; s[n]; ++ n);

   for (int i = 1; i < n; ++ i){
      int j = kmp_arr[i - 1];

      while (j > 0 && s[i] != s[j]){
         j = kmp_arr[j - 1];
      }

      kmp_arr[i] = j + (s[i] == s[j]);

      if (i + 1 < n && kmp_arr[i] > mx){
         mx = kmp_arr[i];
      }
   }

   for (int i = n - 1; i > 0; i = kmp_arr[i] - 1){
      if (kmp_arr[i] <= mx){
         res = kmp_arr[i];
         break;
      }
   }

   if (res){
      for (int i = 0; i < res; ++ i){
         printf ("%c", s[i]);
      }
   }
   else {
      printf ("Just a legend");
   }

   return 0;
   }
