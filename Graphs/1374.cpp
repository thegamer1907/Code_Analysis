#include <stdio.h>

int main(){
    int n, t, indice = 1, aux;
    bool cond = false;
    scanf("%d%d", &n, &t);

    for(int i = 1; i < n; i++){
        scanf("%d", &aux);
        if(i == indice)
            indice += aux;
        if(indice == t)
            cond = true;
    }
    if(cond)
        printf("YES");
    else
        printf("NO");
}
