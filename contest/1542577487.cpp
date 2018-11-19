#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
const int MXN = 1e5+5;
const int MXK = 8;
bool b[MXK];
int arr[MXN][MXK];
int bitarr[MXN];
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    /*
    if(k >= n){
        int buf[MXK];
        for(int i = 1; i < (1 << n); i++){
            buf[0] = buf[1] = buf[2] = buf[3] = buf[4] = 0;
            for(int j = 0; j < n; j++){
                if(i && (1 << j)){
                    for(int l = 0; l < k; l++){
                        if(arr[j][l]){
                            buf[l]++;
                        }
                    }
                }
            }
            bool b = true;
            for(int j = 0; j < k; j++){
                if(2*buf[j] > n){
                    b = false;
                }
            }
            if(!b) continue;
            printf("YES");
            return 0;
        }
        printf("NO");
        return 0;
    }
    */
    set<int> s;
    for(int i = 0; i < n; i++){
        int c = 0;
        for(int j = 0; j < k; j++){
            c = 2*c + arr[i][j];
        }
        bitarr[i] = c;
        s.insert(c);
    }
    int fullbit = 1 << k;
    fullbit--;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (1 << k); j++){
            int c = (fullbit ^ bitarr[i]) & j;
            if(s.find(c) != s.end()){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
