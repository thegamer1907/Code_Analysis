#include<bits/stdc++.h>
using namespace std;

int main()
{

    double a,b,c,d,f;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&f);
    double A,B,C;
    C=c/5.0;
    B=(b+c/60.0)/5.0;
    A=a+B/12;

    double arr[5];
    arr[0]=A;
    arr[1]=B;
    arr[2]=C;
    arr[3]=d;
    arr[4]=f;

    int flag=0;
    sort(arr,arr+5);
    if((arr[0]==d&&arr[4]==f)||(arr[4]==d&&arr[0]==f))
        flag=1;

    for(int i=1;i<=4;++i)
    {
        if((arr[i]==d&&arr[i-1]==f)||(arr[i-1]==d&&arr[i]==f))
            flag=1;
    }





    if(flag)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
