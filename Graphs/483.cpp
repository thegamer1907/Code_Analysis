#include <bits/stdc++.h>
using namespace std;

int main (){
    int i, j = 0, k;
    int a, b;
    string queue;

    cin >> a >> b >> queue;

    while(j<b){
        for (i=1; i<a; i++){
            if (queue[i]=='G' && queue[i-1]=='B'){
                queue[i] = 'B';
                queue[i-1] = 'G';
                i++;
            }
        }
        j++;
    }

    cout << queue << endl;
}