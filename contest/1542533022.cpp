#include <stdio.h>

typedef unsigned long u32;

const char* results[]= {"NO","YES"};

int main(void)
{
    u32 time[3];
    u32 t1,t2;
    unsigned i;
    unsigned answer=1;
    scanf("%lu%lu%lu%lu%lu",time,time+1,time+2,&t1,&t2);
    time[0]%=12;
    time[0]=time[0]*3600+time[1]*60+time[2];
    time[1]=(time[1]*60+time[2])*12;
    time[2]*=720;
    t1*=3600;
    t2*=3600;
    if (t1>t2)
    {
        u32 tmp=t1;
        t1=t2;
        t2=tmp;
    }
    for (i=0; i<3; i++)
    {
        if (t1<time[i] && time[i]<t2)
            answer=0;

    }
    if (answer==0)
    {
        answer=1;
        for (i=0; i<3; i++)
        {
            if (t2<time[i] && time[i]<t1+3600*12)
                answer=0;
            if (t2<time[i]+3600*12 && time[i]<t1)
                answer=0;
        }
    }
    printf("%s",results[answer]);


    return 0;
}
