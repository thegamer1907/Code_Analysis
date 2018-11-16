#include <iostream>

using namespace std;

int main() {
    int n,k,x,fin=0,sol;
    cin>>n >> k;
    sol = k;
    int nrx=0;
    while(n--) {
        cin >> x;
        if(x<=0) {
            cout << nrx;
            return 0;
        }
        if(k==1)
            fin = x;
        if(k<1) {
            if(fin==x)
                ++sol;
            else break;
        }

        --k,++nrx;
    }
    cout << sol;
    return 0;
}
