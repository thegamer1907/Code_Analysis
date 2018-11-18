#include <bits/stdc++.h>
using namespace std;

double horas [10] ;

int main () {

    int t1, t2;
    for(int i = 0; i < 5; i++){

      cin>>horas[i];
      if(i == 1 || i == 2){

        horas[i] /=5.0;
      }
    }
    if ( horas[2] > 0 ) horas[1]+=0.1;
    if ( horas[1] > 0 || horas[2] > 0 ) horas[0]+=0.1 ;
    t1 = horas[3];
    t2 = horas[4];
    sort(horas, horas + 5);


    for(int i = 0; i < 5; i++){
      if((horas[i] == t1 && horas[(i + 1)%5] == t2) || (horas[i] == t2 && horas[(i + 1)%5] == t1)){
        cout<<"YES\n";
        return 0;
      }
    }

    cout<<"NO";


    return 0;
}
