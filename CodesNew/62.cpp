#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    int nl,l;
    int lb,rb;
    cin>>nl>>l;
    int a[nl],dia=0;
    float max_distance=0;
    for(int i=0;i<nl;i++)
        cin>>a[i];
        sort(a,a+nl);
        for(int i=1;i<nl;i++)
        {
            dia=a[i]-a[i-1];
            if(float(dia)>max_distance)
                max_distance=float(dia);

        }
        max_distance=max_distance/2;
        lb=a[0],rb=l-a[nl-1];
        if(float(lb)>max_distance)
            max_distance=float(lb);
        if(float(rb)>max_distance)
            max_distance=float(rb);
        printf("%.10f",max_distance);
        return 0;

}