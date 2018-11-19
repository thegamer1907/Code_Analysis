#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;


int main()
{
    double h,m,s,t1,t2;
    scanf("%lf%lf%lf%lf%lf" , &h,&m,&s,&t1,&t2);

    m = m/5.;
    s = s/5.;
    if(h==12)
        h = 0;

    m+=0.01;
    s+=0.01;
    h+=0.01;

    //cout << h <<endl << m <<endl  << s <<endl;

    if(t1 > t2){
        double temp = t1;
        t1 = t2;
        t2 = temp;
    }

    int c = 0;

    if( t1 < h && h < t2 )
        c++;
    if( t1 < m && m < t2 )
        c++;
    if( t1 < s && s < t2 )
        c++;
    //cout << c;

    if(c==0 || c== 3)
        printf("YES");
    else
        printf("NO");
}
