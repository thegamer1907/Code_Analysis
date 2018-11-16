#include<stdio.h>
#include<string.h>
int main()
{
    int p,q,i;
    scanf("%d%d", &p,&q);
    char input[p+1];
    scanf("%s", input);
    while (q){
        for(i=0; i+1<p; i++){
            if(input[i+1]=='G' && input[i]=='B'){
                input[i]='G';
                input[i+1]='B';
                i++;
            }
        }
        q--;
    }
    printf("%s", input);


    return 0;
}
