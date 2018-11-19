#include<stdio.h>

int main()
{
    char key[3],code[3];
    bool get1=false,get2=false;
    scanf("%s",key);

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",code);
        if(code[0]==key[0] && code[1]==key[1])
        {
            get1=true;
            get2=true;
        }
        if(code[0]==key[1])
            get2=true;
        if(code[1]==key[0])
            get1=true;
    }
    if(get1 && get2)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}
