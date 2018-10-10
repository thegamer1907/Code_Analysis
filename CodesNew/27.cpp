#include<stdio.h>

int main()
{
    int n,m,b,c,d,e;
    float g,f;
    scanf("%d %d",&n,&m);
    int a[n];
    for(b=0;b<n;b++)
        scanf("%d",&a[b]);
    for(b=0;b<n-1;b++)
        for(c=b+1;c<n;c++)
            if(a[b]<a[c])
            {
                d=a[b];
                a[b]=a[c];
                a[c]=d;
            }
    f=0.0;
    for(b=0;b<n-1;b++)
    {
        e=a[b]-a[b+1];
        if((float)e>f) f=(float)e;
    }
    f=f/2.0;
    g=(float)a[n-1]-0;
    if(f<g) f=g;
    g=(float)m-a[0];
    if(f<g) f=g;
    printf("%.10f",f);

}