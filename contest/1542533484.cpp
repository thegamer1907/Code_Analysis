#include <bits/stdc++.h>

using namespace std;
int t1,t2,m,s,h,c1;
int main(){
    
    scanf ("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    

    h %= 12, t1 %= 12, t2 %= 12;

    if (t1 > t2) swap (t1, t2);
     
    bool m1 = true, m2 = true; 
    if (s > 0) m++;
    if (s > 0 || m > 0) h++; 
    
    for (int i = t1*5+1; i <= t2*5; i++){
         if (i == h*5 || i == s || i == m) m1 = false;
    } 
    

    for (int i = t2*5+1; i <= 60; i++)
         if (i == h*5 || i == s || i == m) m2 = false;

    
    for (int i = 0; i <= t1*5; i++)
         if (i == h*5 || i == s || i == m) m2 = false;
   // printf ("%d %d\n", m1, m2);
    if (m1 || m2) printf ("YES\n");
     else printf ("NO\n");

	return 0;
}