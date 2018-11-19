#include <stdio.h>
char c[3];
char a[100][3];
int n;

int main(){
    scanf("%s",c);
    scanf("%d",&n);
    int i;
    int j;
    int k=0;
    for(i=0 ; i<n ; i++)scanf("%s",&a[i]);
    for(i=0 ; i<n ; i++){
        if(a[i][0]==c[0] && a[i][1]==c[1])k=1;
        for(j=0 ; j<n ; j++){
            if(a[i][1]==c[0] && a[j][0]==c[1])k=1;
        }
    }
    if(k)printf("yes");
    else printf("no");
    return 0;
}
