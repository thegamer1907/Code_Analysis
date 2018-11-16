#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, m, A[110], B[110], cnt, lo, hi;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> A[i];
    }

    cin >> m;
    for(i = 0; i < m; i++){
        cin >> B[i];
    }

    sort(A, A+n);
    sort(B, B+m);

    if(m >= n){
        for(i = 0, cnt = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(A[i] == B[j] || abs(A[i]- B[j]) == 1){
                    cnt++;
                    B[j] = -2;
                    A[i] = -2;
                }
            }
        }
    }

    else {
        for(i = 0, cnt = 0; i < m; i++){
            for(j = 0; j < n; j++){
                if(B[i] == A[j] || (abs(B[i]- A[j])) == 1){
                    cnt++;
                    A[j] = -2;
                    B[i] = -2;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
