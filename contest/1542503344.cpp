#include<stdio.h>
#include<string.h>
int main ()
{
    char x[3],y[3];
    int z,a=0,b=0,c,p=0,i;
    scanf("%s",&x);
    scanf("%d",&z);
    for(i=1;i<=z;i++){
    	scanf("%s",&y);
    	if(strcmp(x,y)==0)
    	p=1;
    	if(y[0]==x[1])
    	a=1;
    	if(y[1]==x[0])
    	b=1;
    }
    if(p==1||(a==1&&b==1))
    printf("YES\n");
    else
    printf("NO\n");
	return 0;
}