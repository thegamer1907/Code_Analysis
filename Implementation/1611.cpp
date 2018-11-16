#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);    int Zero =0;
int One=0;int t=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='1') {One+=1;Zero=0;}
        else
        {
            Zero+=1; One =0;
            }

        if(One==7) {t=1;break;}
        if(Zero==7) {t=1;break;}
    }
   if(t==1) printf("YES");
   else printf("NO");

    return 0;
}
