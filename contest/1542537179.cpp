#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double h, m, s, t1, t2;
    scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
    h+=m/60.0+s/3600.0;
    m+=s/60.0;
    t1 = t1 * 5;
    t2 = t2 * 5;
    if(t1 > t2)
    {
        int temp = t1;
        t1 = t2;
        t2 = temp;
    }
    bool flag = false;
    if(h >= t1/5 && h <= t2/5 && m >= t1 && m <= t2 && s >= t1 && s <= t2)
        flag = true;
    if((h <= t1/5 || h >= t2/5) && (m <= t1 || m >= t2) && (s <= t1 || s >= t2))
        flag = true;
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

   			 	   	 	 			  	 	  	  	