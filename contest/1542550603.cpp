#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[3], t[2], p[2];
int main(){
    while(cin >> a[0] >> a[1] >> a[2] >> t[0] >> t[1]){
        a[0] %= 12;
        a[0] *= 5;
        t[0] %= 12;
        t[1] %= 12;
        t[0] *= 5;
        t[1] *= 5;
        sort(a, a + 3);
        for(int i = 0; i < 2; i++){
            if(t[i] > a[0] && t[i] <= a[1])
                p[i] = 1;
            else if(t[i] > a[1] && t[i] <= a[2])
                p[i] = 2;
            else
                p[i] = 3;
        }
        if(p[0] == p[1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
