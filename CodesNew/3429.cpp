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

    int piv1 = 1;
    int piv2 = mayor;
    while(piv1 < piv2){
        int mid = (piv1+piv2)/2;
        if( tapar(mid) ){
            piv2 = mid;
        }
        else{
            piv1 = mid+1;
        }
    }
    menor = piv1;

    printf("%d %d",menor,mayor);

    return 0;
}