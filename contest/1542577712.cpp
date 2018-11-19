#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a, tmp;
    bool in[16];
    for (int i = 0; i < 16; i++)
        in[i] = false;

    for (int i = 0; i < n; i++){
        tmp = 0;
        for (int j = 0; j < k; j++){
            scanf("%d", &a);
            if (a != 0) tmp |= 1 << j;
        }
        in[tmp] = true;
    }

    if (in[0]){
        cout << "YES\n";
        return 0;
    }

    if (k == 1){
        cout << "NO\n";
        return 0;
    }

    int maxx = (1 << k) - 1;

    for (int i = 0; i < k; i++)
        if (in[1 << i])
            for (int j = 0; j < maxx; j++)
                if (in[j] && ((j & (1 << i)) == 0)){
                    cout << "YES\n";
                    return 0;
                }

    if (k < 4){
        cout << "NO\n";
        return 0;
    }

    if ((in[3] && in[12]) || (in[5] && in[10]) || (in[6] && in[9]))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
