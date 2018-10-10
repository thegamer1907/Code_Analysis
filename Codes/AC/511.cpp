#include<iostream>
#include<stdio.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
#include<set>
#include<map>
#include<list>
#include<queue>
#include<utility>
#include<cmath>
#include<cstdlib>

using namespace std;

int f(int a){
    int sum= 0;
    while (a != 0){
        sum+= a % 10;
        a/= 10;
    }
    return sum;
}

int main(){
    int num, res, n= 100000000, k= 0;

    cin >> num;
    for (int i= 0; i < n; i++){
         if (f(i) == 10){
            k++;
         }
         if (k == num){
            res= i;
            break;
         }
    }
    cout << res;
    return 0;
}