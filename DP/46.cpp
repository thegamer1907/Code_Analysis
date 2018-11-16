#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int , int> girl;
    int b, g, bx, gx, group = 0;

    cin >> b;
    int boy[b];
    for(int i = 0; i < b; i++){
        cin >> boy[i];
    }
    sort(boy, boy+b);

    cin >> g;
    for(int i = 0; i < g; i++){
        cin >> gx;
        girl[gx]++;
    }

    for(int i = 0; i < b; i++){
        if(girl.find(boy[i]-1) != girl.end() && girl[boy[i]-1] > 0){
            group++;
            girl[boy[i]-1]--;
        }
        else if(girl.find(boy[i]) != girl.end() && girl[boy[i]] > 0){
            group++;
            girl[boy[i]]--;
        }
        else if(girl.find(boy[i]+1) != girl.end() && girl[boy[i]+1] > 0){
            group++;
            girl[boy[i]+1]--;
        }
    }
    cout << group << endl;
return 0;
}
