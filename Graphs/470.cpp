#include <stdio.h>
int main(){
    int n, t, i, j, temp;
    char ch[100];
    scanf("%d %d %s", &n, &t, ch);
    for(i=1; i<=t; i++){
        for(j=0; j<n; j++){
            if(ch[j]=='B' && ch[j+1]=='G'){
                ch[j+1]='B';
                ch[j]='G';
                j++;
            }
        }
    }
    printf("%s\n", ch);
    return 0;
}
