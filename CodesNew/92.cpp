#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long int  i, j, n, l,big = 0, zero = 0, temp, dis = 0, large = 0, large1 = 0, b = 0;

    double res, comp, bb;
        cin >> n >> l;

    long long int lamp[n];

    for(int i = 0; i < n; i++){
        cin >> lamp[i];
    }
    //sorting
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n;j++){
            if(lamp[i] >= lamp[j]){
                temp = lamp[i];
                lamp[i] = lamp[j];
                lamp[j] = temp;
            }

        }
    }


     for(int i = n-1; i > 0; i--){
        if((lamp[i] - lamp[i-1]) > dis){
            dis  = lamp[i] - lamp[i-1];
        }
    }

     if(lamp[0] != 0){
        large = (lamp[0] - 0);
    }

    if(lamp[n-1] != l){
        large1 = (l -lamp[n-1]);
    }
    if(large >= large1){
        b = large;
    }else
        b = large1;

    comp =  1.0*dis;
    res = comp*1.0/2;
    bb = 1.0*b;

    if(res > bb){
        printf("%.10lf\n", res);
    }else{
        printf("%.10lf\n", bb);
    }

    return 0;
}
