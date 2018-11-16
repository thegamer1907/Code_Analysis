#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int toplam=0;
    int dizi[105];
    scanf("%d %d",&a,&b);
    for(int i = 0;i<a;i++){
        scanf("%d",&dizi[i]);
    }
    sort(dizi,dizi+a);
    for(int i = 0;i<a;i++){
        if(dizi[i]==0){
           
        }
        if(dizi[i]>=dizi[a-b] && dizi[i] > 0){
            
            toplam = toplam+1;    
        }
        
    }
    printf("%d",toplam);
}
