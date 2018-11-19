#include <iostream>
using namespace std;
int main() {
    int h,m,s,t1,t2,x,y,aux1,aux2;
    double aux,a,b,c;
    double array[4];
    a = 0;
    b = 0;
    c = 0;
    cin >> h;
    cin >> m;
    cin >> s;
    cin >> t1;
    cin >> t2;
    aux1 = t1*5;
    aux2 = t2*5;
    if(h==12){
        h = 0;
    }
    double aux3 = m*1.0 / 12;
    double aux4 = s*1.0 / 720;
    double aux5 = s*1.0 / 60;
    for(int i=1; i<=3; i++){
        array[1]=h*5+aux3+aux4;
        array[2]=m+aux5;
        array[3]=s;
    }
    for(int i=1; i<=3; i++){
        for(int j=1; j<=2; j++) {
            if(array[j] > array[i]){
                aux = array[j];
                array[j]=array[i];
                array[i]=aux;
            }
        }
    }
    for(int i=1; i<=3; i++){
        a = array[1];
        b = array[2];
        c = array[3];
    }
    if (aux1<aux2){
        x = aux1;
        y = aux2;
    }else{
        x = aux2;
        y = aux1;
    }
    if( ((0<=x) & (y<=a)) || ((a<=x) & (y<=b)) || ((b<=x) & (y<=c)) || ((c<=x) & (y<=60))  || ((x<=a) & (c<=y)) ){
        cout << "YES" ;
    }else{
        cout << "NO";
    }
    return 0;
}