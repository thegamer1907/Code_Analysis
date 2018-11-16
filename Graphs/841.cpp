#include<stdio.h>
int main(){
    int n,t;
    char a[100];

    scanf("%d%d", &n, &t);
    scanf("%s", a);
    for(int i=0;i<t;i++)//Veces que hacen cambios
    {
        for(int j=0;j<n-1;j++)//Recorrer fila de niños
        {
            if(a[j]=='B' and a[j+1]=='G'){
                a[j] = 'G';
                a[j+1] = 'B';
                j++;
            }
        }
    }
    printf("%s", a);

    return 0;
}
