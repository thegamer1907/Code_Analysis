#include<stdio.h>
int check[100];
int main(){
    int n,t;
    char a[100];

    scanf("%d%d", &n, &t);
    scanf("%s", a);
    for(int i=0;i<t;i++)//Veces que hacen cambios
    {
        for(int k=0;k<n;k++){ //Solución chaca a problemas simples
            check[k] =0;
        }
        for(int j=0;j<n-1;j++)//Recorrer fila de niños
        {
            if(a[j]=='B' and a[j+1]=='G' and check[j]==0){
                a[j] = 'G';
                a[j+1] = 'B';
                check[j+1] = 1;
            }
        }
    }
    printf("%s", a);

    return 0;
}