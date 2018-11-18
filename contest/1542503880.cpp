 #include <bits/stdc++.h>
#define dint int
using namespace std;
int main(){
    dint i,j,n,k;
    cin >> n >> k;
    int teams[16] = {0};
    for(i = 0;i < n;i++){
        dint bits = 0;
        for(j = 0;j < k;j++){
            dint value;
            cin >> value;
            bits += (1 << j)*value;
        }
        teams[bits] = 1;
    }
    for(i = 0;i < 16;i++){
        for(j = 0;j < 16;j++){
                if (teams[i] == 1 && teams[j] == 1){
                if ((i&j) == 0){
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
}
