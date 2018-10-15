#include <bits/stdc++.h>

using namespace std;

int n,m;
int arr[900];

bool tapar(int k){
    int M = m;
    if(arr[n-1] > k)
        return false;
    for(int i=0; i<n; i++){
        int num = k-arr[i];
        if(num <= M){
            M-=num;
        }
        else {
            M = 0;
        }
    }
    if(M > 0)
        return false;
    else
        return true;
}

int main (){

    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int mayor = arr[n-1]+m;

    int menor;
    for(int i=1; i<=mayor; i++){
        if(tapar(i)){
            menor = i;
            break;
        }
    }
    printf("%d %d",menor,mayor);

    return 0;
}
