#include <bits/stdc++.h>

using namespace std;

int main()
{
    int clck[] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 0};
    int h, m, s, t1, t2, fh = 1, fm = 1, fs = 1;
    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);

    if(t1 > t2){
        swap(t1,t2);
    }

    if(t1 < h && h < t2){
        fh = 0;
    }

    else if(t1 == h && (m || s)){
           fh = 0;
    }

    if(t2 != 12){
         if(clck[t1] < m && m < clck[t2]){
             fm = 0;
         }

         else if(clck[t1] == m && s){
             fm = 0;
         }

         if(clck[t1] < s && s < clck[t2]){
             fs = 0;
         }
    }

    else{
        if(clck[t1] < m && m < 60){
             fm = 0;
         }

         else if(clck[t1] == m && s){
                 fm = 0;
         }

         if(clck[t1] < s && s < 60){
             fs = 0;
         }
    }

    if((fh && fm && fs) || (!fh && !fm && !fs)){
        printf("YES");
    }

    else{
        printf("NO");
    }

    return 0;
}
