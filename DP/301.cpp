#include <bits/stdc++.h>
using namespace std;

int main (){
    int i, j, k;
    int a, b, ans=0;

    cin >> a;
    int boy[a];

    for (i=0; i<a; i++){
        cin >> boy[i];
        for (j=i, k=i-1; j>0; j--, k--){
            if (boy[j]<boy[k]){
                boy[j] = boy[j] + boy[k];
                boy[k] = boy[j] - boy[k];
                boy[j] = boy[j] - boy[k];
            } else break;
        }
    }

    cin >> b;
    int girl[b];

    for (i=0; i<b; i++){
        cin >> girl[i];
        for (j=i, k=i-1; j>0; j--, k--){
            if (girl[j]<girl[k]){
                girl[j] = girl[j] + girl[k];
                girl[k] = girl[j] - girl[k];
                girl[j] = girl[j] - girl[k];
            } else break;
        }
    }

    for (i=0; i<a; i++){
        for (j=0; j<b; j++){
            if (boy[i]-girl[j]<=1 && boy[i]-girl[j]>=-1){
                girl[j]=-1;
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
}