#include<stdio.h>
#include<string.h>

int main(){

    int i,j,l,f=1,n;
    char str[100099],str2[100099];
    gets(str);
    l=strlen(str);
    strcpy(str2,str);

    f=0;
    for(i=1;i<l;i++){
        if(str[i]=='B'&&str[i-1]=='A'){
            str[i]='P';
            str[i-1]='P';
            f=1;
            break;
        }
    }
    for(i=1;i<l;i++){
        if(str[i]=='A'&&str[i-1]=='B'){
            str[i]='P';
            str[i-1]='P';
            if(f)f=2;
            break;
        }
    }
    if(f!=2){
        f=0;
        for(i=1;i<l;i++){
            if(str2[i]=='A'&&str2[i-1]=='B'){
                str2[i]='P';
                str2[i-1]='P';
                f=1;
                break;
            }
        }
        for(i=1;i<l;i++){
            if(str2[i]=='B'&&str2[i-1]=='A'){
                str2[i]='P';
                str2[i-1]='P';
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
