#include<stdio.h>
int main()
{
    int n,t,i,j,ln;
    char s[100];
    scanf("%d%d",&n,&t);
    scanf("%s",s);

    for(j=0; j<t; j++){
       for(i=0; i<n; ){
        if(s[i]=='B'&&s[i+1]=='G'){
            s[i]='G';
            s[i+1]='B';
            i+=2;
        }
        else i++;
       }
    }

    printf("%s",s);

    return 0;
}

