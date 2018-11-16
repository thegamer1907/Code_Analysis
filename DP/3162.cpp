#include <bits/stdc++.h>

using namespace std;
int main(){
    int v;
    int tmp[11];
    cin>>v;
    int mini = 99999999;
    for (int i=1; i<10;i++ ) {
        cin>>tmp[i];
        if(mini>=tmp[i]){
            mini = tmp[i];
        }
    }

    int temp = (int)floor(v/mini);
    if(mini>v){
        cout<<-1<<'\n';
    }else{
        while(temp--){
            for(int i = 9; i>0;i--){
                if(v-tmp[i]>=temp*mini){
                    v -= tmp[i];
                    cout<<i;
                    break;
                }
            }
        }
    }
    return 0;
}
