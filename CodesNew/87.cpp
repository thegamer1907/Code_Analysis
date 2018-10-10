#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,L,aux,min,a;
    cin >> N;
    cin >> L;
    double vec[N];
    double distancia[N-1];
    for(int a=0;a<N;a++){
        cin>>vec[a];
    }
    //ordenamiento por seleccion:
    for(int i=0;i<N;i++){
        min=i;
        for (int j=i+1;j<N;j++){
            if(vec[j]<vec[min]){
                min=j;
            }
        }
        aux=vec[i];
        vec[i]=vec[min];
        vec[min]=aux;
    }
    int i=N-1;
    for (int h=0;h<N-1;h++){
        distancia[h]=vec[i]-vec[i-1];
        i--;
    }
    // ordenamiento por seleccion!
    for(int i=0;i<N-1;i++){
        min=i;
        for (int j=i+1;j<N-1;j++){
            if(distancia[j]<distancia[min]){
            min=j;
            }
        }
        a=distancia[i];
        distancia[i]=distancia[min];
        distancia[min]=a;
    }
    double iluminacion=(distancia[N-2])/2;
    cout << fixed << setprecision(10);
    if (L-vec[N-1]>=iluminacion and L-vec[N-1]>=vec[0]){
        cout << L-vec[N-1]<< endl;
    }
    else if(iluminacion>L-vec[N-1] and iluminacion>vec[0]){
        cout<<iluminacion<< endl;
    }
    else {
        cout << vec[0]<< endl;
    }
    return 0;
}