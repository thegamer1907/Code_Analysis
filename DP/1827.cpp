#include<stdio.h>
#include<string.h>

int main(){

    int i,j,a,b,ts,f=1,cn=0,n;
    char s[100099],s2[100099];
    gets(s);
     strcpy(s2,s);
    f=0;
    for(i=1;s[i];i++){
        if(s[i]=='B'&&s[i-1]=='A'){
            s[i]='P';
            s[i-1]='P';
            f=1;
            break;
        }
    }
    for(i=1;s[i];i++){
        if(s[i]=='A'&&s[i-1]=='B'){
            s[i]='P';
            s[i-1]='P';
            if(f)f=2;
            break;
        }
    }
    if(f!=2){
        f=0;
        for(i=1;s2[i];i++){
            if(s2[i]=='A'&&s2[i-1]=='B'){
                s2[i]='P';
                s2[i-1]='P';
                f=1;
                break;
            }
        }
        for(i=1;s2[i];i++){
            if(s2[i]=='B'&&s2[i-1]=='A'){
                s2[i]='P';
                s2[i-1]='P';
                if(f)f=2;
                break;
            }
        }
    }

    if(f==2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
