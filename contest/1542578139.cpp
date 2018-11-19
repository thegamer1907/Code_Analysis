#include <iostream>

using namespace std;

int f[20], sol[20], v[20], lg, k,n,bun,nr,x;

bool ok(){
    int sum[5]={};
    int nr = 0, aux = 0;
    for(int i = 1; i <= lg; i++){
        if(sol[i] == 1){
            aux = 1;

            if(f[v[i]] == 0){
                return 0;
            }

            for(int j = 1; j <= v[i]; j <<= 1){
                if(v[i] & j){
                    sum[aux]++;
                }
                aux++;
            }

            nr++;
        }
    }

    if(nr == 0) return 0;

    for(int i = 1; i <= k; i++){
        if(sum[i] > nr/2){
            return 0;
        }
    }

    return 1;
}

void bkt(int elem)
{
    if(elem > lg){
        if(ok()){
            cout << "YES";
            bun = 1;
        }
        return;
    }

    if(bun == 1){
        return;
    }

    for(int i = 0; i <= 1; i++){
        sol[elem] = i;
        bkt(elem + 1);
        if(bun == 1){
            return;
        }

    }
}

int main()
{
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        nr = 0;

        for(int j = 1; j <= k; j++){
            cin >> x;
            if(x) nr += (1 << (k - j));
        }

        f[nr]++;
    }

    for(int i = 0; i < (1 << k); i++){
        v[++lg] = i;
    }

    bkt(1);

    if(bun == 0) cout << "NO";

    return 0;
}
