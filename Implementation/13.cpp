#include <iostream>

using namespace std;

bool is(int a, int b, int k){
    return ((a > k) && (b > k)) || ((a <= k) && (b <= k));
}

int log2(int k){
    int ans = 0;
    int z = 1;
    while (z < k){
        z *= 2;
        ++ans;
    }
    return ans;
}

int main()
{
    int n, a, b, k;
    cin >> n >> a >> b;
    k = n / 2;
    for (int i = 0; i < 10; ++i){
        //cout << a << ' ' << b << ' ' << k << endl;
        if (!is(a, b, k)){
            if(i == 0){
                cout << "Final!" << endl;
                break;
            }
            else{
                cout << log2(k) + 1 << endl;
                break;
            }
        }
        if(a > k){
            a -= k;
        }
        if(b > k){
            b -= k;
        }
        k /= 2;
    }
    return 0;
}
