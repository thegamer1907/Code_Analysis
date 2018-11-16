#include<stdio.h>

int main()
{
    int n;
    int a[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int tmax=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int t=0;
            for(int k=0;k<i;k++){
                t+=a[k];
            }
            for(int k=j+1;k<n;k++){
                t+=a[k];
            }
            for(int k=i;k<=j;k++){
                t+=1-a[k];
            }
            if(t>tmax) tmax=t;
        }
    }
    printf("%d\n",tmax);
    return 0;
}
