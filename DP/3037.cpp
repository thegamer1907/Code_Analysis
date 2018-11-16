#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int n = 4;
const int MOD = 1e9 + 7;

struct Matrix{
    ll m[4][4];
    Matrix() {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                m[i][j] = 0;
    }
};

Matrix multiply(Matrix a, Matrix b){
    Matrix c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                c.m[i][j] = (c.m[i][j] + a.m[i][k] * b.m[k][j]) % MOD;
    return c;
}

Matrix power(Matrix a, int b){
    Matrix res;
    for (int i = 0; i < n; i++)
        res.m[i][i] = 1;
    while (b > 0){
        if (b & 1)
            res = multiply(res, a);
        a = multiply(a, a);
        b >>= 1;
    }
    return res;
}


int main(){
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int b;
    cin >> b;
    Matrix a;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a.m[i][j] = 1;
    for (int i = 0; i < n; i++)
        a.m[i][i] = 0;
    a = power(a, b);
    cout << a.m[0][0] << endl;
	return 0;
}
