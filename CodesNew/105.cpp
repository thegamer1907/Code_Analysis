#include<stdio.h>
int main()
{
    int n,l,i,j,temp;
    scanf("%d %d",&n,&l);
    int a[n];
    float x,y,z;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    x=a[0]-0;
    for(i=0;i<n-1;i++){
        y=(float)(a[i+1]-a[i])/2;

        if(y>x)
            x=y;
    }
    if(a[n-1]!=l){
    z=(float)(l-a[n-1]);
    if(z>x)
        x=z;}

    printf("%lf",x);

    return 0;
}